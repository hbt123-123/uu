// rea decompile_all
// name: FUN_1004475e0
// address: 0x1004475e0
// body: available
// range: 0x1004475e0-0x1004476ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004476a8 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1004475e0(int *param_1,int *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*param_1 == *param_2) {
    uVar2 = *(ulong *)(param_1 + 2);
    FUN_10042a230(uVar2,*(undefined8 *)(param_2 + 2));
    if ((uVar2 & 1) != 0) {
      bVar1 = *(byte *)(param_2 + 9);
      if ((*(byte *)(param_1 + 9) & 1) == 0) {
        if (param_1[8] != param_2[8]) {
          bVar1 = 1;
        }
        if ((bVar1 & 1) != 0) {
          return 0;
        }
      }
      else if (bVar1 == 0) {
        return 0;
      }
      bVar1 = *(byte *)(param_2 + 0xb);
      if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
        if ((float)param_1[10] != (float)param_2[10]) {
          bVar1 = 1;
        }
        if ((bVar1 & 1) != 0) {
          return 0;
        }
      }
      else if (bVar1 == 0) {
        return 0;
      }
      bVar1 = *(byte *)(param_2 + 0xd);
      if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
        if (param_1[0xc] != param_2[0xc]) {
          bVar1 = 1;
        }
        if ((bVar1 & 1) == 0) goto LAB_100447698;
      }
      else if (bVar1 != 0) {
LAB_100447698:
        uVar3 = *(undefined8 *)(param_1 + 4);
        FUN_1000094a4(uVar3,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_2 + 4),
                      *(undefined8 *)(param_2 + 6));
        return uVar3;
      }
    }
  }
  return 0;
}

