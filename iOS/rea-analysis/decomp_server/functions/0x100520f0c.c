// rea decompile_all
// name: FUN_100520f0c
// address: 0x100520f0c
// body: available
// range: 0x100520f0c-0x100521003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100520f0c(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar5);
  FUN_1001a2c70();
  _swift_bridgeObjectRelease(lVar5);
  if ((param_3 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0xff;
    param_1[2] = 0x2000000000000000;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_10054ac68();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar5 + 0x30) + param_2 * 0x10 + 8));
    puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + param_2 * 0x30);
    uVar4 = puVar3[2];
    uVar1 = *(undefined1 *)(puVar3 + 3);
    uVar6 = *puVar3;
    param_1[1] = puVar3[1];
    *param_1 = uVar6;
    param_1[2] = uVar4;
    *(undefined1 *)(param_1 + 3) = uVar1;
    uVar4 = puVar3[4];
    param_1[5] = puVar3[5];
    param_1[4] = uVar4;
    FUN_1005217ac(param_2,lVar5);
    *unaff_x20 = lVar5;
  }
  return;
}

