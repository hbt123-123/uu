// rea decompile_all
// name: FUN_1005cf180
// address: 0x1005cf180
// body: available
// range: 0x1005cf180-0x1005cf247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cf180(ulong *param_1,ulong param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  undefined8 uStack_50;
  undefined *local_40;
  undefined *puStack_38;
  
  local_40 = PTR___sSWN_100995868;
  puStack_38 = PTR___sSW10Foundation15ContiguousBytesAAWP_100996320;
  puVar1 = &local_58;
  local_58 = param_2;
  uStack_50 = param_3;
  FUN_10003f030(puVar1,PTR___sSWN_100995868);
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    uVar3 = puVar1[1];
    if (uVar3 != uVar2) {
      if ((long)(uVar3 - uVar2) < 0xf) {
        FUN_1001f8388();
        uVar3 = uVar3 & 0xffffffffffffff;
      }
      else if (uVar3 - uVar2 < 0x7fffffff) {
        FUN_1001f84b4();
        uVar3 = uVar3 | 0x4000000000000000;
      }
      else {
        FUN_1001f843c();
        uVar3 = uVar3 | 0x8000000000000000;
      }
      goto LAB_1005cf1e0;
    }
  }
  uVar2 = 0;
  uVar3 = 0xc000000000000000;
LAB_1005cf1e0:
  FUN_10003f094(&local_58);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}

