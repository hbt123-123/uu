// rea decompile_all
// name: FUN_1002699b8
// address: 0x1002699b8
// body: available
// range: 0x1002699b8-0x100269b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002699b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  ID self;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *unaff_x20;
  lVar8 = *(long *)(lVar11 + 0x50);
  lVar10 = *(long *)(lVar8 + -8);
  lVar12 = *(long *)(lVar10 + 0x40);
  puVar3 = &DAT_1009a9118;
  _swift_allocObject(&DAT_1009a9118,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &DAT_1009a9140;
  _swift_allocObject(&DAT_1009a9140,0x18,7);
  _swift_weakInit(puVar4 + 0x10,param_3);
  (**(code **)(lVar10 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar12 + 0xfU & 0xfffffffffffffff0),param_2,lVar8);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar7 + 0x30 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1009a9168;
  _swift_allocObject(&DAT_1009a9168,uVar9 + lVar12,uVar7 | 7);
  *(long *)(puVar5 + 0x10) = lVar8;
  *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(lVar11 + 0x58);
  *(undefined **)(puVar5 + 0x20) = puVar3;
  *(undefined **)(puVar5 + 0x28) = puVar4;
  (**(code **)(lVar10 + 0x20))
            (puVar5 + uVar9,&stack0xffffffffffffffa0 + -(lVar12 + 0xfU & 0xfffffffffffffff0),lVar8);
  lVar8 = *(long *)(param_1 + 0x20);
  puVar6 = &DAT_1009a9190;
  _swift_allocObject(&DAT_1009a9190,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10026b6f8;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  self = *(ID *)(lVar8 + 0x10);
  _swift_retain(puVar3);
  _swift_retain(puVar4);
  _swift_retain(lVar8);
  _swift_retain(puVar5);
  _objc_msgSend(self,"lock");
  uVar1 = *(undefined8 *)(lVar8 + 0x18);
  uVar2 = *(undefined8 *)(lVar8 + 0x20);
  *(code **)(lVar8 + 0x18) = FUN_100102840;
  *(undefined **)(lVar8 + 0x20) = puVar6;
  FUN_10007ed2c(uVar1,uVar2);
  _objc_msgSend(*(ID *)(lVar8 + 0x10),"unlock");
  _swift_release(puVar3);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_release(lVar8);
  return;
}

