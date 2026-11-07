// rea decompile_all
// name: FUN_1003280f0
// address: 0x1003280f0
// body: available
// range: 0x1003280f0-0x100328323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003280f0(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  lVar1 = 0;
  local_a0 = param_3;
  local_98 = param_2;
  local_90 = param_5;
  uStack_88 = param_7;
  local_80 = param_8;
  local_68 = param_4;
  FUN_1002fa4fc(0,param_5,param_7,param_8);
  local_70 = *(long *)(lVar1 + -8);
  lVar9 = (long)&local_a0 - (*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSqMa(0,param_6);
  lVar8 = *(long *)(lVar2 + -8);
  lVar7 = lVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(param_6 + -8);
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = lVar7 - uVar5;
  pcVar11 = (code *)(lVar6 - uVar5);
  local_78 = param_1;
  (*local_98)(lVar7,param_1);
  lVar3 = lVar7;
  (**(code **)(lVar10 + 0x30))(lVar7,1,param_6);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar8 + 8))(lVar7,lVar2);
  }
  else {
    (**(code **)(lVar10 + 0x20))(pcVar11,lVar7,param_6);
    lVar3 = 0;
    __sScS12ContinuationV11YieldResultOMa(0,param_6);
    lVar7 = *(long *)(lVar3 + -8);
    lVar2 = (long)pcVar11 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
    local_98 = pcVar11;
    (**(code **)(lVar10 + 0x10))(lVar6,pcVar11,param_6);
    uVar4 = 0;
    __sScS12ContinuationVMa(0,param_6);
    __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF(lVar2,lVar6,uVar4);
    (**(code **)(lVar7 + 8))(lVar2,lVar3);
    (**(code **)(lVar10 + 8))(pcVar11,param_6);
  }
  lVar2 = 0;
  FUN_10030528c(0,local_90,uStack_88,local_80);
  lVar3 = local_70;
  (**(code **)(local_70 + 0x10))(lVar9,local_78 + *(int *)(lVar2 + 0x2c),lVar1);
  lVar2 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar1);
  (**(code **)(lVar3 + 8))(lVar9,lVar1);
  if ((int)lVar2 == 4) {
    __sScS12ContinuationVMa(0,param_6);
    __sScS12ContinuationV6finishyyF();
  }
  return;
}

