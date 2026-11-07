// rea decompile_all
// name: MMKV::initWithMMapID:cryptKey:rootPath:mode:expectedCapacity:
// address: 0x100379210
// body: available
// range: 0x100379210-0x1003793df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x38 bytes */

ID MMKV::initWithMMapID_cryptKey_rootPath_mode_expectedCapacity_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6,
             unsigned_long_long param_7)

{
  ulong uVar1;
  void **ppvVar2;
  void **ppvVar3;
  long *plVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  void **ppvVar8;
  undefined *self;
  long *plVar9;
  ulong uVar10;
  void *local_98;
  ulong uStack_90;
  undefined7 local_88;
  byte bStack_81;
  void *local_80;
  ulong uStack_78;
  long local_70;
  void *local_68;
  ulong local_60;
  ulong local_58;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::MMKV;
  local_50 = param_1;
  IVar5 = NSObject::init((ID)&local_50,"init");
  if (IVar5 != 0) {
    local_68 = (void *)0x0;
    local_60 = 0;
    local_58 = 0;
    IVar6 = objc_stub::length(param_5);
    if (IVar6 != 0) {
      objc_stub::UTF8String(param_5);
      std::string::assign((char *)&local_68);
    }
    local_80 = (void *)0x0;
    uStack_78 = 0;
    local_70 = 0;
    IVar6 = objc_stub::length(param_4);
    if (IVar6 == 0) {
      uStack_90 = 0;
      uVar10 = 0;
    }
    else {
      IVar6 = objc_stub::bytes(param_4);
      IVar7 = objc_stub::length(param_4);
      FUN_10037b73c(&local_98,IVar6,IVar7);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = CONCAT17(bStack_81,local_88);
      uVar10 = (ulong)bStack_81;
    }
    uVar1 = local_60;
    if (-1 < (long)local_58) {
      uVar1 = local_58 >> 0x38;
    }
    ppvVar2 = (void **)0x0;
    if (uVar1 != 0) {
      ppvVar2 = &local_68;
    }
    if (-1 < (char)uVar10) {
      uStack_90 = uVar10;
    }
    ppvVar3 = (void **)0x0;
    if (uStack_90 != 0) {
      ppvVar3 = &local_80;
    }
    IVar6 = objc_stub::UTF8String(param_3);
    FUN_10037b888(&local_98,IVar6);
    ppvVar8 = &local_98;
    FUN_10037f8cc(ppvVar8,param_6,ppvVar3,ppvVar2,param_7);
    *(void ***)(IVar5 + 0x18) = ppvVar8;
    if ((char)bStack_81 < '\0') {
      operator_delete(local_98);
      ppvVar8 = *(void ***)(IVar5 + 0x18);
    }
    if (ppvVar8 != (void **)0x0) {
      self = &_OBJC_CLASS___NSString;
      _objc_alloc();
      plVar9 = *(long **)(IVar5 + 0x18);
      FUN_1003800b8();
      plVar4 = (long *)*plVar9;
      if (-1 < *(char *)((long)plVar9 + 0x17)) {
        plVar4 = plVar9;
      }
      IVar6 = objc_stub::initWithUTF8String_((ID)self,plVar4);
      *(ID *)(IVar5 + 8) = IVar6;
    }
    if (local_70 < 0) {
      operator_delete(local_80);
    }
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
  }
  return IVar5;
}

