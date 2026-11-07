// rea decompile_all
// name: FUN_10026e1fc
// address: 0x10026e1fc
// body: available
// range: 0x10026e1fc-0x10026e2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_10026e1fc(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar3 == 2) {
      lVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      uVar5 = 2;
    }
    else if ((int)plVar3 == 1) {
      lVar4 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
      uVar5 = 1;
    }
    else {
      lVar4 = *param_2;
      lVar1 = param_2[1];
      FUN_100008184(lVar4,lVar1);
      *param_1 = lVar4;
      param_1[1] = lVar1;
      uVar5 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar4 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

