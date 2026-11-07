// rea decompile_all
// name: FUN_1000fd0b4
// address: 0x1000fd0b4
// body: available
// range: 0x1000fd0b4-0x1000fd187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fd0b4(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  
  local_38 = param_3 & 1;
  local_48 = param_1;
  uStack_40 = param_2;
  FUN_100004bb4(&DAT_100a78988,&DAT_10080d7e0);
  FUN_10039ed98(&local_58);
  uVar1 = 0;
  if (uStack_50 >> 0x3c < 0xf) {
    uVar1 = local_58;
  }
  uVar2 = 0xc000000000000000;
  if (uStack_50 >> 0x3c < 0xf) {
    uVar2 = uStack_50;
  }
  FUN_100401b14(0);
  local_70 = uVar1;
  uStack_68 = uVar2;
  local_60 = param_4;
  FUN_1003fb48c(FUN_100103450,auStack_80,0xd000000000000094,0x800000010088a280,0x2928656d75736572,
                0xe800000000000000,0x1a,0);
  FUN_100006cdc(uVar1,uVar2);
  return;
}

