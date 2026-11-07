// rea decompile_all
// name: FUN_100295d4c
// address: 0x100295d4c
// body: available
// range: 0x100295d4c-0x100295e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100295d4c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = 0;
  FUN_10028fd24(0,uVar1,uVar2,uVar7);
  lVar9 = *(long *)(lVar4 + -8);
  puVar8 = &stack0xffffffffffffffb0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x10))(puVar8);
  puVar5 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar4);
  bVar3 = (int)puVar5 != 1;
  if (bVar3) {
    lVar4 = 0;
    __ss6ResultOMa(0,uVar1,uVar2,uVar7);
    lVar9 = *(long *)(lVar4 + -8);
    (**(code **)(lVar9 + 0x20))(param_1,puVar8,lVar4);
    pcVar6 = *(code **)(lVar9 + 0x38);
  }
  else {
    (**(code **)(lVar9 + 8))(puVar8,lVar4);
    lVar4 = 0;
    __ss6ResultOMa(0,uVar1,uVar2,uVar7);
    pcVar6 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  (*pcVar6)(param_1,!bVar3,1,lVar4);
  return;
}

