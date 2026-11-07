// rea decompile_all
// name: FUN_1005880f0
// address: 0x1005880f0
// body: available
// range: 0x1005880f0-0x100588373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005881dc) */
/* WARNING: Removing unreachable block (ram,0x000100588354) */
/* WARNING: Removing unreachable block (ram,0x000100588314) */
/* WARNING: Removing unreachable block (ram,0x000100588218) */
/* WARNING: Removing unreachable block (ram,0x000100588330) */
/* WARNING: Removing unreachable block (ram,0x000100588370) */
/* WARNING: Removing unreachable block (ram,0x00010058824c) */
/* WARNING: Removing unreachable block (ram,0x0001005882cc) */
/* WARNING: Removing unreachable block (ram,0x000100588280) */

void FUN_1005880f0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_78 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  uVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while ((uVar2 & 1) == 0) {
      if (lVar1 < 6) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            _swift_beginAccess(param_1 + 0x10,auStack_78,0x21,0);
            pcVar3 = *(code **)(param_4 + 0x158);
            lVar1 = param_1 + 0x10;
LAB_1005882f0:
            (*pcVar3)(lVar1,param_3,param_4);
            _swift_endAccess(auStack_78);
          }
          else if (lVar1 == 2) {
            FUN_10058deac(param_2,param_1,param_3,param_4,FUN_1005a8654,&DAT_1009d4a08);
          }
        }
        else if (lVar1 == 3) {
          FUN_100588374(param_2,param_1,param_3,param_4);
        }
        else if (lVar1 == 4) {
          FUN_100588408(param_2,param_1,param_3,param_4);
        }
        else if (lVar1 == 5) {
          FUN_10058849c(param_2,param_1,param_3,param_4);
        }
      }
      else if (lVar1 < 9) {
        if (lVar1 == 6) {
          FUN_100596af4(param_2,param_1,param_3,param_4,FUN_1005a8654,&DAT_1009d4a08);
        }
        else if (lVar1 == 7) {
          FUN_100596c28(param_2,param_1,param_3,param_4,FUN_1005a8fbc,&DAT_1009d5018);
        }
        else if (lVar1 == 8) {
          FUN_100588530(param_2,param_1,param_3,param_4);
        }
      }
      else if (lVar1 == 9) {
        FUN_1005885c4(param_2,param_1,param_3,param_4);
      }
      else {
        if (lVar1 == 10) {
          _swift_beginAccess(param_1 + 0xa0,auStack_78,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x160);
          lVar1 = param_1 + 0xa0;
          goto LAB_1005882f0;
        }
        if (lVar1 == 0xb) {
          FUN_100588658(param_2,param_1,param_3,param_4);
        }
      }
      lVar1 = param_3;
      uVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}

