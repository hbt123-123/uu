// rea decompile_all
// name: FUN_100389924
// address: 0x100389924
// body: available
// range: 0x100389924-0x100389b2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100389924(ulong param_1,ID param_2)

{
  int iVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  ID local_38;
  
  local_38 = param_2;
  IVar2 = objc_stub::length(param_2);
  if (IVar2 != 0) {
    if (*(long *)(param_1 + 0xb0) == 0) {
      lVar3 = *(long *)(param_1 + 0x68);
      FUN_100385ff8(lVar3,&local_38);
      if (lVar3 != 0) {
        *(undefined1 *)(param_1 + 0x99) = 0;
        if ((DAT_100ad1440 & 1) == 0) {
          iVar1 = 0xad1440;
          ___cxa_guard_acquire();
          if (iVar1 != 0) {
            thunk_FUN_10037e7cc(&DAT_100ad1420,0);
            ___cxa_atexit(thunk_FUN_10037edac,&DAT_100ad1420,0x100000000);
            ___cxa_guard_release(&DAT_100ad1440);
          }
        }
        uVar4 = param_1;
        if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
          FUN_1003897c4(param_1,&DAT_100ad1420,lVar3 + 0x18,0);
        }
        else {
          FUN_100389600(param_1,&DAT_100ad1420,local_38,0);
        }
        if ((uVar4 & 1) != 0) {
          if (*(char *)(param_1 + 0xd8) == '\x01') {
            lVar3 = *(long *)(param_1 + 0x68);
            FUN_100385ff8(lVar3,&local_38);
            if (lVar3 == 0) {
              return;
            }
          }
          FUN_10038e370(*(undefined8 *)(param_1 + 0x68),lVar3);
        }
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 0x70);
      FUN_100385ff8(lVar3,&local_38);
      if (lVar3 != 0) {
        *(undefined1 *)(param_1 + 0x99) = 0;
        if ((DAT_100ad1418 & 1) == 0) {
          iVar1 = 0xad1418;
          ___cxa_guard_acquire();
          if (iVar1 != 0) {
            thunk_FUN_10037e7cc(&DAT_100ad13f9,0);
            ___cxa_atexit(thunk_FUN_10037edac,&DAT_100ad13f9,0x100000000);
            ___cxa_guard_release(&DAT_100ad1418);
          }
        }
        uVar4 = param_1;
        FUN_10038ea7c(param_1,&DAT_100ad13f9,local_38,lVar3 + 0x18,0);
        if ((uVar4 & 1) != 0) {
          if (*(char *)(param_1 + 0xd8) == '\x01') {
            lVar3 = *(long *)(param_1 + 0x70);
            FUN_100385ff8(lVar3,&local_38);
            if (lVar3 == 0) {
              return;
            }
          }
          FUN_10038e318(*(undefined8 *)(param_1 + 0x70),lVar3);
        }
      }
    }
  }
  return;
}

