// rea decompile_all
// name: FUN_10009b308
// address: 0x10009b308
// body: available
// range: 0x10009b308-0x10009b407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009b308(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar4);
  FUN_10008109c(param_2,param_3,param_4);
  _swift_bridgeObjectRelease(lVar4);
  if ((param_3 & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100099ec4();
    }
    lVar2 = *(long *)(lVar4 + 0x30) + param_2 * 0x18;
    uVar5 = *(undefined8 *)(lVar2 + 8);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x10));
    _swift_bridgeObjectRelease(uVar5);
    puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + param_2 * 0x48);
    uVar5 = puVar3[4];
    uVar7 = puVar3[7];
    uVar6 = puVar3[6];
    param_1[5] = puVar3[5];
    param_1[4] = uVar5;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(puVar3 + 8);
    uVar7 = *puVar3;
    uVar6 = puVar3[3];
    uVar5 = puVar3[2];
    param_1[1] = puVar3[1];
    *param_1 = uVar7;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    FUN_10009b880(param_2,lVar4);
    *unaff_x20 = lVar4;
  }
  return;
}

