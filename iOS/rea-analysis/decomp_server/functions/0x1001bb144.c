// rea decompile_all
// name: FUN_1001bb144
// address: 0x1001bb144
// body: available
// range: 0x1001bb144-0x1001bb31b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001bb144(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x228);
  *puVar2 = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x2e0) = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x2e8) = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x2f8) = *(undefined8 *)(unaff_x22 + 0x260);
  *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 0x270);
  *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0x268);
  *(undefined8 *)(unaff_x22 + 0x310) = *(undefined8 *)(unaff_x22 + 0x278);
  *(undefined4 *)(unaff_x22 + 0x318) = *(undefined4 *)(unaff_x22 + 0x280);
  *(undefined1 *)(unaff_x22 + 0x31c) = *(undefined1 *)(unaff_x22 + 0x284);
  *(undefined4 *)(unaff_x22 + 800) = *(undefined4 *)(unaff_x22 + 0x288);
  *(undefined1 *)(unaff_x22 + 0x324) = *(undefined1 *)(unaff_x22 + 0x28c);
  *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x298);
  *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x290);
  *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(unaff_x22 + 0x2a8);
  *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x2a0);
  *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0x2b8);
  *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(unaff_x22 + 0x2b0);
  *(undefined4 *)(unaff_x22 + 0x358) = *(undefined4 *)(unaff_x22 + 0x2c0);
  *(undefined1 *)(unaff_x22 + 0x35c) = *(undefined1 *)(unaff_x22 + 0x2c4);
  *(undefined8 *)(unaff_x22 + 0x360) = *(undefined8 *)(unaff_x22 + 0x2c8);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x2c8);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x348);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x340);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x338);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x330);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x2e8);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x2e0);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x328);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 800);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x318);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x310);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x308);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x300);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x2f8);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x2f0);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x358);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x350);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x2d8);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x2d0);
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x480) + 0x10);
  _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x418,0,0);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    FUN_1001bb980(puVar2);
    if (DAT_100a73bd8 != -1) {
      _swift_once(&DAT_100a73bd8,FUN_1001ba814);
    }
    uVar4 = DAT_100a7cd60;
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001001bb298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar4);
    return;
  }
  puVar3 = *(undefined8 **)(unaff_x22 + 0x478);
  FUN_1001bb944((undefined8 *)(unaff_x22 + 0x2d0),unaff_x22 + 0x368);
  FUN_1001bb980(puVar2);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2e0);
  puVar3[1] = *(undefined8 *)(unaff_x22 + 0x2d8);
  *puVar3 = uVar6;
  puVar3[3] = uVar5;
  puVar3[2] = uVar4;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar5 = *(undefined8 *)(unaff_x22 + 800);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x300);
  puVar3[9] = *(undefined8 *)(unaff_x22 + 0x318);
  puVar3[8] = uVar4;
  puVar3[0xb] = uVar6;
  puVar3[10] = uVar5;
  puVar3[5] = uVar10;
  puVar3[4] = uVar9;
  puVar3[7] = uVar8;
  puVar3[6] = uVar7;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x330);
  puVar3[0x12] = *(undefined8 *)(unaff_x22 + 0x360);
  puVar3[0xf] = uVar7;
  puVar3[0xe] = uVar6;
  puVar3[0x11] = uVar5;
  puVar3[0x10] = uVar4;
  puVar3[0xd] = uVar9;
  puVar3[0xc] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0001001bb300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

