// rea decompile_all
// name: FUN_10011878c
// address: 0x10011878c
// body: available
// range: 0x10011878c-0x100118a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10011878c(byte *param_1,uint param_2)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 auStack_80 [17];
  undefined1 local_6f;
  undefined1 auStack_60 [16];
  byte *local_50;
  
  FUN_100401b14(0);
  local_50 = param_1;
  FUN_1003fb45c(FUN_10011cde8,auStack_60,0xd000000000000092,0x8000000100882970,0xd00000000000001b,
                0x800000010088d4e0,0x1f6,0);
  bVar2 = *param_1;
  if (1 < bVar2) {
    if (bVar2 == 2) {
      uVar4 = 0;
      if (param_1[0x20] == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar1 = 0;
      if (param_1[0x30] == 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x28);
      }
      FUN_10011b56c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),uVar4,uVar1);
      uVar3 = (uint)uVar4;
    }
    else if (bVar2 == 3) {
      FUN_1001183fc();
      uVar3 = (uint)param_1;
    }
    else {
      FUN_100118604(param_1);
      uVar3 = (uint)param_1;
    }
    goto LAB_100118a14;
  }
  if (bVar2 == 0) {
    uVar3 = 0;
    if ((param_2 & 0xff) != 6) {
      uVar3 = param_2;
    }
    bVar2 = param_1[0x31];
    if ((bVar2 < 3) || (1 < bVar2 - 3)) {
      (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
      local_6f = 0;
      FUN_1003fb48c(thunk_FUN_10011cdf0,auStack_80,0xd00000000000009a,0x800000010088d2c0,
                    0xd00000000000001f,0x800000010088d500,0x10,0);
      puVar6 = &DAT_10080e004;
LAB_100118a04:
      uVar5 = *(undefined4 *)(puVar6 + (long)(char)bVar2 * 4);
    }
    else {
      uVar5 = 0x19;
    }
  }
  else {
    if ((param_2 & 0xff) == 6) {
      param_2 = 1;
    }
    bVar2 = param_1[0x31];
    if ((bVar2 < 3) || (1 < bVar2 - 3)) {
      (*(code *)PTR____chkstk_darwin_100995498)(param_2);
      local_6f = 1;
      FUN_1003fb48c(FUN_10011cdf0,auStack_80,0xd00000000000009a,0x800000010088d2c0,
                    0xd00000000000001f,0x800000010088d500,0x10,0);
      puVar6 = &DAT_10080e01c;
      goto LAB_100118a04;
    }
    uVar5 = 0x1a;
  }
  FUN_1001177b4(param_1,uVar5);
  uVar3 = (uint)param_1;
LAB_100118a14:
  return uVar3 & 1;
}

