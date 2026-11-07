// rea decompile_all
// name: FUN_1003faa2c
// address: 0x1003faa2c
// body: available
// range: 0x1003faa2c-0x1003fabb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003faa2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar2 = (undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *puVar2 = 0;
  puVar3 = (undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *puVar3 = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *puVar5 = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *puVar4 = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *puVar6 = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar7 = 0;
  _swift_beginAccess(puVar7,auStack_80,1,0);
  *puVar7 = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  _swift_beginAccess(puVar6,auStack_98,1,0);
  *puVar6 = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  _swift_beginAccess(puVar4,auStack_b0,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar4 = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(puVar5,auStack_c8,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *puVar5 = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(puVar3,auStack_e0,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *puVar3 = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(puVar2,auStack_f8,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar2 = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  _swift_bridgeObjectRelease(uVar1);
  return;
}

