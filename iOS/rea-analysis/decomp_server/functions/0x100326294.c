// rea decompile_all
// name: FUN_100326294
// address: 0x100326294
// body: available
// range: 0x100326294-0x10032640b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100326294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar1 = 0;
  local_68 = param_2;
  FUN_10028fd24(0,param_3,param_4,param_5);
  lVar10 = *(long *)(lVar1 + -8);
  puVar7 = auStack_70 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_10029ca28(0,param_3,param_4,param_5);
  lVar11 = *(long *)(lVar2 + -8);
  lVar8 = (long)puVar7 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sScS12ContinuationV11YieldResultOMa(0,lVar2);
  lVar6 = *(long *)(lVar3 + -8);
  lVar9 = lVar8 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar11 + 0x10))(lVar8,param_1,lVar2);
  uVar4 = 0;
  __sScS12ContinuationVMa(0,lVar2);
  __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF(lVar9,lVar8,uVar4);
  (**(code **)(lVar6 + 8))(lVar9,lVar3);
  (**(code **)(lVar10 + 0x10))(puVar7,param_1,lVar1);
  puVar5 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar1);
  (**(code **)(lVar10 + 8))(puVar7,lVar1);
  if ((int)puVar5 == 1) {
    __sScS12ContinuationV6finishyyF(uVar4);
  }
  return;
}

