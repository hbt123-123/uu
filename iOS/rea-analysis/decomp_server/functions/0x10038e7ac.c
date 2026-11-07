// rea decompile_all
// name: FUN_10038e7ac
// address: 0x10038e7ac
// body: available
// range: 0x10038e7ac-0x10038e953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_10038e7ac(long param_1,ID param_2,ID param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ID IVar3;
  undefined *self;
  char *pcVar4;
  char local_62;
  byte local_61;
  ulong local_60;
  ulong *puStack_58;
  undefined8 *local_48;
  long local_40;
  long local_38;
  
  IVar3 = objc_stub::length(param_2);
  if (param_3 == 0) {
    return (char *)0x0;
  }
  if (IVar3 == 0) {
    return (char *)0x0;
  }
  local_40 = *(long *)(param_1 + 0xb8);
  if (local_40 != 0) {
    FUN_100392994();
  }
  local_48 = *(undefined8 **)(param_1 + 200);
  if ((local_48 != (undefined8 *)0x0) && (*(char *)((long)local_48 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_48,*(undefined4 *)(local_48 + 1));
  }
  FUN_100388bbc(&local_62,param_1,param_2);
  uVar1 = (ulong)local_61;
  if (local_62 != '\0') {
    uVar1 = local_60;
  }
  if (uVar1 != 0) {
    IVar3 = param_3;
    FUN_100392678();
    if ((int)IVar3 != 0) {
      pcVar4 = &local_62;
      FUN_10039251c(pcVar4,param_3);
      goto LAB_10038e8f4;
    }
    IVar3 = objc_stub::conformsToProtocol_(param_3,&objc::protocol_t::NSCoding);
    if ((int)IVar3 != 0) {
      uVar1 = (ulong)local_61;
      puVar2 = &local_60;
      if (local_62 != '\0') {
        uVar1 = local_60;
        puVar2 = puStack_58;
      }
      IVar3 = NSData::dataWithBytesNoCopy_length_freeWhenDone_
                        ((ID)&_OBJC_CLASS___NSData,puVar2,uVar1,0);
      local_38 = 0;
      self = &_OBJC_CLASS___NSKeyedUnarchiver;
      _objc_alloc();
      IVar3 = objc_stub::initForReadingFromData_error_((ID)self,IVar3,&local_38);
      if (local_38 == 0) {
        objc_stub::setRequiresSecureCoding_(IVar3,0);
        pcVar4 = (char *)objc_stub::decodeObjectForKey_
                                   (IVar3,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_1009952f8)
        ;
        goto LAB_10038e8f4;
      }
      FUN_100386734(3,"MMKV_OSX.cpp","unSecureUnArchiveObjectWithData",0xcd,
                    "fail to init unarchiver %@");
    }
  }
  pcVar4 = (char *)0x0;
LAB_10038e8f4:
  thunk_FUN_10037edac(&local_62);
  FUN_100385fb0(&local_48);
  FUN_100385098(&local_40);
  return pcVar4;
}

