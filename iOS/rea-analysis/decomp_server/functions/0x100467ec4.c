// rea decompile_all
// name: FUN_100467ec4
// address: 0x100467ec4
// body: available
// range: 0x100467ec4-0x100467f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100467ec4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  puVar1 = (undefined8 *)0x3f0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x3f0);
  }
  else {
    _swift_coroFrameAlloc(0x3f0,0x6af8);
  }
  *param_1 = puVar1;
  puVar1[0x7d] = unaff_x20;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  puVar1[1] = *(undefined8 *)(lVar2 + 0x28);
  *puVar1 = uVar3;
  uVar4 = *(undefined8 *)(lVar2 + 0x38);
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  uVar6 = *(undefined8 *)(lVar2 + 0x48);
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  uVar7 = *(undefined8 *)(lVar2 + 0x50);
  uVar9 = *(undefined8 *)(lVar2 + 0x68);
  uVar8 = *(undefined8 *)(lVar2 + 0x60);
  puVar1[7] = *(undefined8 *)(lVar2 + 0x58);
  puVar1[6] = uVar7;
  puVar1[9] = uVar9;
  puVar1[8] = uVar8;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  uVar4 = *(undefined8 *)(lVar2 + 0x78);
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  uVar6 = *(undefined8 *)(lVar2 + 0x88);
  uVar5 = *(undefined8 *)(lVar2 + 0x80);
  uVar7 = *(undefined8 *)(lVar2 + 0x90);
  uVar9 = *(undefined8 *)(lVar2 + 0xa8);
  uVar8 = *(undefined8 *)(lVar2 + 0xa0);
  puVar1[0xf] = *(undefined8 *)(lVar2 + 0x98);
  puVar1[0xe] = uVar7;
  puVar1[0x11] = uVar9;
  puVar1[0x10] = uVar8;
  puVar1[0xb] = uVar4;
  puVar1[10] = uVar3;
  puVar1[0xd] = uVar6;
  puVar1[0xc] = uVar5;
  uVar4 = *(undefined8 *)(lVar2 + 0xb8);
  uVar3 = *(undefined8 *)(lVar2 + 0xb0);
  uVar6 = *(undefined8 *)(lVar2 + 200);
  uVar5 = *(undefined8 *)(lVar2 + 0xc0);
  uVar8 = *(undefined8 *)(lVar2 + 0xd8);
  uVar7 = *(undefined8 *)(lVar2 + 0xd0);
  *(undefined1 *)(puVar1 + 0x18) = *(undefined1 *)(lVar2 + 0xe0);
  puVar1[0x15] = uVar6;
  puVar1[0x14] = uVar5;
  puVar1[0x17] = uVar8;
  puVar1[0x16] = uVar7;
  puVar1[0x13] = uVar4;
  puVar1[0x12] = uVar3;
  _memmove(puVar1 + 0x19,(void *)(lVar2 + 0x20),0xc1);
  FUN_10007f314(puVar1,puVar1 + 0x32,&DAT_100aa09a8,&BYTE_10082db80);
  auVar10._8_8_ = puVar1 + 0x19;
  auVar10._0_8_ = FUN_100467f90;
  return auVar10;
}

