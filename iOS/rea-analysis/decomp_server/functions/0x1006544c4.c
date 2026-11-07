// rea decompile_all
// name: FUN_1006544c4
// address: 0x1006544c4
// body: available
// range: 0x1006544c4-0x100654647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006544c4(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long in_x3;
  
  puVar3 = &DAT_100ab9070;
  FUN_100004bb4(&DAT_100ab9070,&DAT_10084b280);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 0x1a;
  *(undefined8 *)(puVar3 + 0x10) = 0xd;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0x7ff;
  puVar3[0x30] = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(puVar3 + 0x38) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(puVar3 + 0x48) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0x14f5d5;
  puVar3[0x50] = 0;
  *(undefined **)(puVar3 + 0x58) = puVar1;
  *(undefined8 *)(puVar3 + 0x68) = 0;
  *(undefined8 *)(puVar3 + 0x60) = 0x18271b1;
  puVar3[0x70] = 0;
  *(undefined **)(puVar3 + 0x78) = puVar1;
  *(undefined8 *)(puVar3 + 0x88) = 0;
  *(undefined8 *)(puVar3 + 0x80) = 0xbfa17dc7;
  puVar3[0x90] = 0;
  *(undefined **)(puVar3 + 0x98) = puVar1;
  *(undefined8 *)(puVar3 + 0xa8) = 0;
  *(undefined8 *)(puVar3 + 0xa0) = 0x1f51f3fee3b;
  puVar3[0xb0] = 0;
  *(undefined **)(puVar3 + 0xb8) = puVar1;
  *(undefined8 *)(puVar3 + 200) = 0;
  *(undefined8 *)(puVar3 + 0xc0) = 0x32907381cdf;
  puVar3[0xd0] = 0;
  *(undefined **)(puVar3 + 0xd8) = puVar1;
  *(undefined8 *)(puVar3 + 0xe8) = 0;
  *(undefined8 *)(puVar3 + 0xe0) = 0x136a352b2c8c1;
  puVar3[0xf0] = 0;
  *(undefined **)(puVar3 + 0xf8) = puVar1;
  *(undefined8 *)(puVar3 + 0x108) = 0;
  *(undefined8 *)(puVar3 + 0x100) = 0x136a352b2c8c1;
  puVar3[0x110] = 0;
  *(undefined **)(puVar3 + 0x118) = puVar1;
  *(undefined8 *)(puVar3 + 0x128) = 0;
  *(undefined8 *)(puVar3 + 0x120) = 0x351591274f9af9fb;
  puVar3[0x130] = 0;
  *(undefined **)(puVar3 + 0x138) = puVar1;
  *(undefined8 *)(puVar3 + 0x148) = 0;
  *(undefined8 *)(puVar3 + 0x140) = 0x351591274f9af9fb;
  puVar3[0x150] = 0;
  *(undefined **)(puVar3 + 0x158) = puVar1;
  *(undefined8 *)(puVar3 + 0x168) = 0;
  *(undefined8 *)(puVar3 + 0x160) = 0x351591274f9af9fb;
  puVar3[0x170] = 0;
  *(undefined **)(puVar3 + 0x178) = puVar1;
  uVar5 = 0x80000001008bf6e0;
  puVar4 = &DAT_d000000000000018;
  uVar7 = 10;
  FUN_10065b1a0();
  if (in_x3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100654644);
    (*pcVar2)();
  }
  *(undefined1 **)(puVar3 + 0x180) = puVar4;
  *(undefined8 *)(puVar3 + 0x188) = uVar5;
  puVar3[400] = uVar7;
  *(long *)(puVar3 + 0x198) = in_x3;
  uVar5 = 0xd000000000000019;
  uVar6 = 0x80000001008bf700;
  uVar7 = 10;
  FUN_10065b1a0();
  if (in_x3 != 0) {
    *(undefined8 *)(puVar3 + 0x1a0) = uVar5;
    *(undefined8 *)(puVar3 + 0x1a8) = uVar6;
    puVar3[0x1b0] = uVar7;
    *(long *)(puVar3 + 0x1b8) = in_x3;
    DAT_100b3a7f8 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100654648);
  (*pcVar2)();
}

