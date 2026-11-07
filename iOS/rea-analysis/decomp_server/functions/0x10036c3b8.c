// rea decompile_all
// name: FUN_10036c3b8
// address: 0x10036c3b8
// body: available
// range: 0x10036c3b8-0x10036c4cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10036c3b8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    puVar4 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    iVar6 = *(int *)(puVar4 + 0x30);
    uVar7 = *(undefined8 *)((long)param_2 + (long)iVar6);
    _swift_errorRetain(uVar7);
    *(undefined8 *)((long)param_1 + (long)iVar6) = uVar7;
    iVar6 = (int)plVar2;
    if (iVar6 < 3) {
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      else if (iVar6 == 1) {
        uVar7 = 1;
      }
      else {
        uVar7 = 2;
      }
    }
    else if (iVar6 == 3) {
      uVar7 = 3;
    }
    else if (iVar6 == 4) {
      uVar7 = 4;
    }
    else {
      uVar7 = 5;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

