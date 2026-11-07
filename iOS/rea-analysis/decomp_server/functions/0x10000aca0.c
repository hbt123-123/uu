// rea decompile_all
// name: FUN_10000aca0
// address: 0x10000aca0
// body: available
// range: 0x10000aca0-0x10000addf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000aca0(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar5 = 0xea00000000007468;
  uVar3 = 0x676965685f78616d;
  if (param_2 != 5) {
    uVar5 = 0xe600000000000000;
    uVar3 = 0x746c75736572;
  }
  uVar6 = 0x747065645f746962;
  if (param_2 != 3) {
    uVar6 = 0x746469775f78616d;
  }
  if (param_2 < 5) {
    uVar5 = 0xe900000000000068;
    uVar3 = uVar6;
  }
  uVar6 = 0x735f616d6f726863;
  uVar1 = 0xef676e696c706d61;
  if (param_2 != 1) {
    uVar6 = 0xd000000000000011;
    uVar1 = 0x8000000100876270;
  }
  uVar2 = 0xeb00000000636564;
  uVar4 = 0x6f635f6f65646976;
  if (param_2 != 0) {
    uVar2 = uVar1;
    uVar4 = uVar6;
  }
  if (param_2 < 3) {
    uVar5 = uVar2;
    uVar3 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}

