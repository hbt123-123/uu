// rea decompile_all
// name: FUN_100088df8
// address: 0x100088df8
// body: available
// range: 0x100088df8-0x100088eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100088df8(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar2 = (undefined8 *)0x1a0;
  if (PTR__swift_coroFrameAlloc_1000f0770 == (undefined *)0x0) {
    puVar2 = _malloc(0x1a0);
  }
  else {
    _swift_coroFrameAlloc(0x1a0,0x4a4e);
  }
  *param_1 = puVar2;
  uVar3 = *param_2;
  if (-1 < (long)uVar3) {
    if (uVar3 < *(ulong *)(*unaff_x20 + 0x10)) {
      lVar4 = *unaff_x20 + uVar3 * 0xd0;
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      puVar2[1] = *(undefined8 *)(lVar4 + 0x28);
      *puVar2 = uVar5;
      uVar6 = *(undefined8 *)(lVar4 + 0x38);
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      uVar8 = *(undefined8 *)(lVar4 + 0x48);
      uVar7 = *(undefined8 *)(lVar4 + 0x40);
      uVar9 = *(undefined8 *)(lVar4 + 0x50);
      uVar11 = *(undefined8 *)(lVar4 + 0x68);
      uVar10 = *(undefined8 *)(lVar4 + 0x60);
      puVar2[7] = *(undefined8 *)(lVar4 + 0x58);
      puVar2[6] = uVar9;
      puVar2[9] = uVar11;
      puVar2[8] = uVar10;
      puVar2[3] = uVar6;
      puVar2[2] = uVar5;
      puVar2[5] = uVar8;
      puVar2[4] = uVar7;
      uVar6 = *(undefined8 *)(lVar4 + 0x78);
      uVar5 = *(undefined8 *)(lVar4 + 0x70);
      uVar8 = *(undefined8 *)(lVar4 + 0x88);
      uVar7 = *(undefined8 *)(lVar4 + 0x80);
      uVar9 = *(undefined8 *)(lVar4 + 0x90);
      uVar11 = *(undefined8 *)(lVar4 + 0xa8);
      uVar10 = *(undefined8 *)(lVar4 + 0xa0);
      puVar2[0xf] = *(undefined8 *)(lVar4 + 0x98);
      puVar2[0xe] = uVar9;
      puVar2[0x11] = uVar11;
      puVar2[0x10] = uVar10;
      puVar2[0xb] = uVar6;
      puVar2[10] = uVar5;
      puVar2[0xd] = uVar8;
      puVar2[0xc] = uVar7;
      uVar6 = *(undefined8 *)(lVar4 + 0xb8);
      uVar5 = *(undefined8 *)(lVar4 + 0xb0);
      uVar8 = *(undefined8 *)(lVar4 + 200);
      uVar7 = *(undefined8 *)(lVar4 + 0xc0);
      uVar9 = *(undefined8 *)(lVar4 + 0xd0);
      uVar11 = *(undefined8 *)(lVar4 + 0xe8);
      uVar10 = *(undefined8 *)(lVar4 + 0xe0);
      puVar2[0x17] = *(undefined8 *)(lVar4 + 0xd8);
      puVar2[0x16] = uVar9;
      puVar2[0x19] = uVar11;
      puVar2[0x18] = uVar10;
      puVar2[0x13] = uVar6;
      puVar2[0x12] = uVar5;
      puVar2[0x15] = uVar8;
      puVar2[0x14] = uVar7;
      puVar2[0x1f] = puVar2[5];
      puVar2[0x1e] = puVar2[4];
      puVar2[0x21] = puVar2[7];
      puVar2[0x20] = puVar2[6];
      puVar2[0x1b] = puVar2[1];
      puVar2[0x1a] = *puVar2;
      puVar2[0x1d] = puVar2[3];
      puVar2[0x1c] = puVar2[2];
      puVar2[0x27] = puVar2[0xd];
      puVar2[0x26] = puVar2[0xc];
      puVar2[0x29] = puVar2[0xf];
      puVar2[0x28] = puVar2[0xe];
      puVar2[0x23] = puVar2[9];
      puVar2[0x22] = puVar2[8];
      puVar2[0x25] = puVar2[0xb];
      puVar2[0x24] = puVar2[10];
      puVar2[0x31] = puVar2[0x17];
      puVar2[0x30] = puVar2[0x16];
      puVar2[0x33] = puVar2[0x19];
      puVar2[0x32] = puVar2[0x18];
      puVar2[0x2d] = puVar2[0x13];
      puVar2[0x2c] = puVar2[0x12];
      puVar2[0x2f] = puVar2[0x15];
      puVar2[0x2e] = puVar2[0x14];
      puVar2[0x2b] = puVar2[0x11];
      puVar2[0x2a] = puVar2[0x10];
      auVar12._8_8_ = puVar2 + 0x1a;
      auVar12._0_8_ = FUN_100088eec;
      return auVar12;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100088eec);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100088ee8);
  (*pcVar1)();
}

