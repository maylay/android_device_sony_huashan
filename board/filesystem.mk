# Partitions informations
BOARD_BOOTIMAGE_PARTITION_SIZE := 20971520
BOARD_CACHEIMAGE_PARTITION_SIZE := 576716800
BOARD_RECOVERYIMAGE_PARTITION_SIZE := 16777216
BOARD_SYSTEMIMAGE_PARTITION_SIZE := 1287651328
BOARD_USERDATAIMAGE_PARTITION_SIZE := 5865717248

# Partitions types
BOARD_CACHEIMAGE_FILE_SYSTEM_TYPE := ext4
TARGET_USERIMAGES_USE_EXT4 := true
TARGET_USERIMAGES_USE_F2FS := true

# Partitions blocks
BOARD_FLASH_BLOCK_SIZE := 131072

# Root extra symlinks
BOARD_ROOT_EXTRA_SYMLINKS := /data/tombstones:/tombstones
