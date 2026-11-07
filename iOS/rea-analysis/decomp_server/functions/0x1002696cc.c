// rea decompile_all
// name: FUN_1002696cc
// address: 0x1002696cc
// body: available
// range: 0x1002696cc-0x1002697e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_1002696cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *unaff_x20;
  lVar6 = *(long *)(lVar7 + 0x50);
  lVar8 = *(long *)(lVar6 + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  puVar1 = &DAT_1009a9118;
  _swift_allocObject(&DAT_1009a9118,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  (**(code **)(lVar8 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),param_1,lVar6);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar5 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009a91b8;
  _swift_allocObject(&DAT_1009a91b8,uVar5 + lVar9,uVar4 | 7);
  *(long *)(puVar2 + 0x10) = lVar6;
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(lVar7 + 0x58);
  *(undefined **)(puVar2 + 0x20) = puVar1;
  (**(code **)(lVar8 + 0x20))
            (puVar2 + uVar5,&stack0xffffffffffffffb0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),lVar6);
  FUN_100264cec(0);
  _swift_allocObject();
  pcVar3 = FUN_10026b7a0;
  FUN_100264fdc(FUN_10026b7a0,puVar2,0,0);
  _swift_release(puVar2);
  return pcVar3;
}

