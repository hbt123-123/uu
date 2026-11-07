// rea decompile_all
// name: MMKV::migrateFromUserDefaultsDictionaryRepresentation:
// address: 0x10037afdc
// body: available
// range: 0x10037afdc-0x10037b0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

unsigned_long_long
MMKV::migrateFromUserDefaultsDictionaryRepresentation_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  unsigned_long_long uVar2;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  IVar1 = objc_stub::count(param_3);
  if (IVar1 == 0) {
    FUN_100386734(1,"libMMKV.mm","-[MMKV migrateFromUserDefaultsDictionaryRepresentation:]",0x419,
                  "migrate data fail, dic is nil or empty");
    uVar2 = 0;
  }
  else {
    _objc_autoreleasePoolPush();
    puStack_58 = &local_50;
    local_50 = 0;
    local_40 = 0x2020000000;
    local_38 = 0;
    local_80 = PTR___NSConcreteStackBlock_100995490;
    local_78 = 0xc2000000;
    local_70 = FUN_10037b0d8;
    puStack_68 = &DAT_1009b5a38;
    local_60 = param_1;
    local_48 = puStack_58;
    objc_stub::enumerateKeysAndObjectsUsingBlock_(param_3,&local_80);
    uVar2 = local_48[3];
    __Block_object_dispose(&local_50,8);
    _objc_autoreleasePoolPop(IVar1);
  }
  return uVar2;
}

