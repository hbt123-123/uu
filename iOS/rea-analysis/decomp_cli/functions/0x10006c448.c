// rea decompile_all
// name: FUN_10006c448
// address: 0x10006c448
// body: available
// range: 0x10006c448-0x10006c57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10006c448(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar2 = &stack0xffffffffffffffb0 + -uVar4;
  lVar6 = (long)puVar2 - uVar4;
  lVar1 = 0;
  FUN_100098548(0,lVar5);
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = lVar6 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x10))(lVar7);
  lVar3 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,lVar1);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar9 + 8))(lVar7,lVar1);
    lVar3 = -0x7ffffffefff359a0;
    puVar2 = (undefined1 *)0xd00000000000001b;
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,lVar7,lVar5);
    (**(code **)(lVar8 + 0x10))(puVar2,lVar6,lVar5);
    lVar3 = lVar5;
    __sSS10describingSSx_tclufC(puVar2,lVar5);
    (**(code **)(lVar8 + 8))(lVar6,lVar5);
  }
  auVar10._8_8_ = lVar3;
  auVar10._0_8_ = puVar2;
  return auVar10;
}

