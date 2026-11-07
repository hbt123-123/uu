// rea decompile_all
// name: FUN_1004498dc
// address: 0x1004498dc
// body: available
// range: 0x1004498dc-0x10044995f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004498dc(ulong *param_1,uint param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)((long)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x35) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x35) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Read-only address (ram,0x000100825cf0) is written */
      auVar1._4_4_ = 0;
      auVar1._0_4_ = -param_2;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      auVar1._8_4_ = -param_2;
      auVar1._12_4_ = 0;
      auVar2._9_7_ = 0;
      auVar2._0_9_ = _DAT_100825cf0;
      auVar2 = NEON_ushl(auVar1,auVar2,8);
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined1 *)((long)param_1 + 0x21) = 0;
      *(undefined1 *)((long)param_1 + 0x22) = 0;
      *(undefined1 *)((long)param_1 + 0x23) = 0;
      *(byte *)((long)param_1 + 0x24) = auVar2[0xc] & 0xfe;
      *(char *)((long)param_1 + 0x25) = auVar2[0xd];
      *(char *)((long)param_1 + 0x26) = auVar2[0xe];
      *(byte *)((long)param_1 + 0x27) = auVar2[0xf] & 0x7f;
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)((long)param_1 + 0x19) = 0;
      *(undefined1 *)((long)param_1 + 0x1a) = 0;
      *(undefined1 *)((long)param_1 + 0x1b) = 0;
      *(undefined1 *)((long)param_1 + 0x1c) = 0;
      *(undefined1 *)((long)param_1 + 0x1d) = 0;
      *(undefined1 *)((long)param_1 + 0x1e) = 0;
      *(byte *)((long)param_1 + 0x1f) = auVar2[7] & 0x30;
      param_1[5] = 0;
      *(undefined1 *)((long)param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      return;
    }
  }
  return;
}

