// rea decompile_all
// name: FUN_100387538
// address: 0x100387538
// body: available
// range: 0x100387538-0x10038774b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003876f8 to 0x100387178 FUN_100387178 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100387538(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *param_1;
  if (2 < *(uint *)(*(long *)(lVar6 + 0xa8) + 4)) {
    uVar1 = **(uint **)(*(long *)(lVar6 + 0x80) + 0x20);
    uVar7 = (ulong)uVar1;
    if (*(ulong *)(lVar6 + 0x88) != uVar7) {
      FUN_100386734(2,"MMKV_IO.cpp","operator()",0xed,
                    "oldStyleActualSize %u not equal to meta actual size %lu");
      if (uVar7 < *(ulong *)param_1[1] && (ulong)(uVar1 + 4) <= *(ulong *)param_1[1]) {
        lVar2 = lVar6;
        FUN_1003805fc(lVar6,uVar7,**(undefined4 **)(lVar6 + 0xa8));
        if ((int)lVar2 != 0) {
          FUN_100386734(1,"MMKV_IO.cpp","operator()",0xf0,
                        "looks like [%s] been downgrade & upgrade again");
          *(undefined1 *)param_1[2] = 1;
          uVar3 = **(undefined4 **)(lVar6 + 0xa8);
          goto LAB_1003876e0;
        }
      }
      else {
        FUN_100386734(2,"MMKV_IO.cpp","operator()",0xf6,
                      "oldStyleActualSize %u greater than file size %lu");
      }
    }
    uVar1 = *(uint *)(*(long *)(lVar6 + 0xa8) + 0x20);
    uVar7 = (ulong)uVar1;
    if (uVar7 < *(ulong *)param_1[1] && (ulong)(uVar1 + 4) <= *(ulong *)param_1[1]) {
      uVar3 = *(undefined4 *)(*(long *)(lVar6 + 0xa8) + 0x24);
      lVar2 = lVar6;
      FUN_1003805fc(lVar6,uVar7,uVar3);
      if ((int)lVar2 != 0) {
        *(undefined1 *)param_1[2] = 1;
LAB_1003876e0:
        FUN_100387178(lVar6,uVar7,uVar3,0,0);
        return;
      }
      pcVar5 = "check [%s] error: lastActualSize %u, lastActualCRC %u";
      uVar4 = 0x102;
    }
    else {
      pcVar5 = "check [%s] error: lastActualSize %u, file size is %u";
      uVar4 = 0x106;
    }
    FUN_100386734(3,"MMKV_IO.cpp","operator()",uVar4,pcVar5);
  }
  return;
}

