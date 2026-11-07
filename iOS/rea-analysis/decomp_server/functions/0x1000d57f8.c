// rea decompile_all
// name: FUN_1000d57f8
// address: 0x1000d57f8
// body: available
// range: 0x1000d57f8-0x1000d5a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d58d0 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000d5a48 to 0x1000d6184 FUN_1000d6184 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d57f8(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,long *param_5,
                  long *param_6,long param_7,code *param_8)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  ID self;
  undefined8 uVar4;
  undefined1 uVar5;
  long *local_b0;
  long lStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 local_8f;
  long *local_88;
  long lStack_80;
  long *local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  
  FUN_10003f030(param_1,param_1[3]);
  plVar1 = param_2;
  (*(code *)*param_1)(param_2,param_3);
  if ((((ulong)plVar1 >> 0x20 & 1) == 0) && ((int)plVar1 == 1 || (int)plVar1 == 0xd)) {
    self = *(ID *)(param_4 + 0x10);
    _objc_msgSend(self,"lock");
    if (*(char *)(param_4 + 0x18) == '\0') {
      *(undefined1 *)(param_4 + 0x18) = 2;
      _objc_msgSend(self,"unlock");
      local_78 = (long *)0x0;
      uStack_70 = 0;
      local_68 = 0x103;
      local_88 = param_2;
      lStack_80 = param_3;
      (*param_8)(&local_88);
      return;
    }
  }
  else {
    self = *(ID *)(param_4 + 0x10);
    _objc_msgSend(self,"lock");
    if (*(char *)(param_4 + 0x18) == '\0') {
      *(undefined1 *)(param_4 + 0x18) = 1;
      _objc_msgSend(self,"unlock");
      lVar2 = param_5[3];
      FUN_10003f030();
      plVar1 = *(long **)(*param_5 + 0x38);
      if ((plVar1 == param_6 && *(long *)(*param_5 + 0x40) == param_7) ||
         (param_5 = param_6, lVar2 = param_7,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), ((ulong)param_5 & 1) != 0)) {
        FUN_1000ce104();
        uVar4 = 0;
        uVar5 = 0;
        uVar3 = 0;
      }
      else {
        FUN_1000d6df8(param_6);
        FUN_1000ce93c(&local_b0);
        _swift_bridgeObjectRelease(param_7);
        param_5 = local_b0;
        lVar2 = lStack_a8;
        plVar1 = local_a0;
        uVar4 = uStack_98;
        uVar5 = local_90;
        uVar3 = local_8f;
      }
      local_68 = CONCAT11(uVar3,uVar5);
      local_88 = param_5;
      lStack_80 = lVar2;
      local_78 = plVar1;
      uStack_70 = uVar4;
      _objc_msgSend(self,"lock");
      *(undefined1 *)(param_4 + 0x18) = 2;
      _objc_msgSend(self,"unlock");
      (*param_8)(&local_88);
      FUN_1000d6184(param_5,lVar2,plVar1,uVar4,uVar5,uVar3);
      return;
    }
  }
  _objc_msgSend(self,"unlock");
  return;
}

