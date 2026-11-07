// rea decompile_all
// name: FUN_1000a8804
// address: 0x1000a8804
// body: available
// range: 0x1000a8804-0x1000a8923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000a8804(undefined8 *param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  puVar2 = (undefined8 *)0x270;
  if (PTR__swift_coroFrameAlloc_1000f0770 == (undefined *)0x0) {
    puVar2 = _malloc(0x270);
  }
  else {
    _swift_coroFrameAlloc(0x270,0x84fb);
  }
  *param_1 = puVar2;
  if (((long)param_2 < param_3) || (param_4 <= (long)param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000a891c);
    (*pcVar1)();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000a8920);
    (*pcVar1)();
  }
  if (param_2 < *(ulong *)(param_5 + 0x10)) {
    param_5 = param_5 + param_2 * 0xd0;
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    puVar2[1] = *(undefined8 *)(param_5 + 0x28);
    *puVar2 = uVar3;
    uVar4 = *(undefined8 *)(param_5 + 0x38);
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    uVar6 = *(undefined8 *)(param_5 + 0x48);
    uVar5 = *(undefined8 *)(param_5 + 0x40);
    uVar7 = *(undefined8 *)(param_5 + 0x50);
    uVar9 = *(undefined8 *)(param_5 + 0x68);
    uVar8 = *(undefined8 *)(param_5 + 0x60);
    puVar2[7] = *(undefined8 *)(param_5 + 0x58);
    puVar2[6] = uVar7;
    puVar2[9] = uVar9;
    puVar2[8] = uVar8;
    puVar2[3] = uVar4;
    puVar2[2] = uVar3;
    puVar2[5] = uVar6;
    puVar2[4] = uVar5;
    uVar4 = *(undefined8 *)(param_5 + 0x78);
    uVar3 = *(undefined8 *)(param_5 + 0x70);
    uVar6 = *(undefined8 *)(param_5 + 0x88);
    uVar5 = *(undefined8 *)(param_5 + 0x80);
    uVar7 = *(undefined8 *)(param_5 + 0x90);
    uVar9 = *(undefined8 *)(param_5 + 0xa8);
    uVar8 = *(undefined8 *)(param_5 + 0xa0);
    puVar2[0xf] = *(undefined8 *)(param_5 + 0x98);
    puVar2[0xe] = uVar7;
    puVar2[0x11] = uVar9;
    puVar2[0x10] = uVar8;
    puVar2[0xb] = uVar4;
    puVar2[10] = uVar3;
    puVar2[0xd] = uVar6;
    puVar2[0xc] = uVar5;
    uVar4 = *(undefined8 *)(param_5 + 0xb8);
    uVar3 = *(undefined8 *)(param_5 + 0xb0);
    uVar6 = *(undefined8 *)(param_5 + 200);
    uVar5 = *(undefined8 *)(param_5 + 0xc0);
    uVar7 = *(undefined8 *)(param_5 + 0xd0);
    uVar9 = *(undefined8 *)(param_5 + 0xe8);
    uVar8 = *(undefined8 *)(param_5 + 0xe0);
    puVar2[0x17] = *(undefined8 *)(param_5 + 0xd8);
    puVar2[0x16] = uVar7;
    puVar2[0x19] = uVar9;
    puVar2[0x18] = uVar8;
    puVar2[0x13] = uVar4;
    puVar2[0x12] = uVar3;
    puVar2[0x15] = uVar6;
    puVar2[0x14] = uVar5;
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    puVar2[0x1b] = *(undefined8 *)(param_5 + 0x28);
    puVar2[0x1a] = uVar3;
    uVar4 = *(undefined8 *)(param_5 + 0x38);
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    uVar6 = *(undefined8 *)(param_5 + 0x48);
    uVar5 = *(undefined8 *)(param_5 + 0x40);
    uVar7 = *(undefined8 *)(param_5 + 0x50);
    uVar9 = *(undefined8 *)(param_5 + 0x68);
    uVar8 = *(undefined8 *)(param_5 + 0x60);
    puVar2[0x21] = *(undefined8 *)(param_5 + 0x58);
    puVar2[0x20] = uVar7;
    puVar2[0x23] = uVar9;
    puVar2[0x22] = uVar8;
    puVar2[0x1d] = uVar4;
    puVar2[0x1c] = uVar3;
    puVar2[0x1f] = uVar6;
    puVar2[0x1e] = uVar5;
    uVar4 = *(undefined8 *)(param_5 + 0x78);
    uVar3 = *(undefined8 *)(param_5 + 0x70);
    uVar6 = *(undefined8 *)(param_5 + 0x88);
    uVar5 = *(undefined8 *)(param_5 + 0x80);
    uVar7 = *(undefined8 *)(param_5 + 0x90);
    uVar9 = *(undefined8 *)(param_5 + 0xa8);
    uVar8 = *(undefined8 *)(param_5 + 0xa0);
    puVar2[0x29] = *(undefined8 *)(param_5 + 0x98);
    puVar2[0x28] = uVar7;
    puVar2[0x2b] = uVar9;
    puVar2[0x2a] = uVar8;
    puVar2[0x25] = uVar4;
    puVar2[0x24] = uVar3;
    puVar2[0x27] = uVar6;
    puVar2[0x26] = uVar5;
    uVar4 = *(undefined8 *)(param_5 + 0xb8);
    uVar3 = *(undefined8 *)(param_5 + 0xb0);
    uVar6 = *(undefined8 *)(param_5 + 200);
    uVar5 = *(undefined8 *)(param_5 + 0xc0);
    uVar7 = *(undefined8 *)(param_5 + 0xd0);
    uVar9 = *(undefined8 *)(param_5 + 0xe8);
    uVar8 = *(undefined8 *)(param_5 + 0xe0);
    puVar2[0x31] = *(undefined8 *)(param_5 + 0xd8);
    puVar2[0x30] = uVar7;
    puVar2[0x33] = uVar9;
    puVar2[0x32] = uVar8;
    puVar2[0x2d] = uVar4;
    puVar2[0x2c] = uVar3;
    puVar2[0x2f] = uVar6;
    puVar2[0x2e] = uVar5;
    FUN_10006ff98(puVar2,puVar2 + 0x34);
    auVar10._8_8_ = puVar2 + 0x1a;
    auVar10._0_8_ = FUN_1000a8924;
    return auVar10;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000a8924);
  (*pcVar1)();
}

