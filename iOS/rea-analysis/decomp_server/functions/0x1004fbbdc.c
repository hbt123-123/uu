// rea decompile_all
// name: FUN_1004fbbdc
// address: 0x1004fbbdc
// body: available
// range: 0x1004fbbdc-0x1004fbcef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fbbdc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [40];
  
  lVar8 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,lVar8,PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  lVar4 = (long)(auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0));
  __sSci17makeAsyncIterator0bC0QzyFTj(lVar4,lVar8,uVar9);
  FUN_1004f9894(unaff_x20 + *(int *)(param_2 + 0x34),auStack_78);
  uVar3 = *(undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x38));
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x3c));
  uVar5 = *puVar1;
  uVar2 = *(undefined1 *)(puVar1 + 1);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x28);
  FUN_1004fa9c8(param_1,lVar4,auStack_78,uVar3,uVar5,uVar2,lVar8,uVar6,uVar9);
  return;
}

