// rea decompile_all
// name: FUN_100423ffc
// address: 0x100423ffc
// body: available
// range: 0x100423ffc-0x1004240bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100423ffc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uStack_78 = param_1[1];
  local_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  local_60 = param_1[4];
  local_50 = param_1[6];
  if ((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(byte *)(param_1 + 9) != 0xff)) {
    uVar1 = 4;
    if ((*(byte *)(param_1 + 9) & 1) == 0) {
      uVar1 = 0;
    }
    if ((uVar1 | (uint)((ulong)param_1[8] >> 0x3c) & 3) == 2) {
      pcVar2 = *(code **)(param_4 + 0x88);
      FUN_10042f0e0();
      (*pcVar2)(&local_80,3,&DAT_1009be950,param_1,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004240bc);
  (*pcVar2)();
}

