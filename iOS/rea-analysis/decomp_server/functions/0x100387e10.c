// rea decompile_all
// name: FUN_100387e10
// address: 0x100387e10
// body: available
// range: 0x100387e10-0x100387f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100387e10(long param_1,long param_2)

{
  ulong uVar1;
  undefined6 *puVar2;
  long **pplVar3;
  uint uVar4;
  long ***ppplVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  undefined1 auStack_90 [24];
  char local_78;
  byte bStack_77;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 *local_6e;
  long **local_58;
  long **local_50;
  long **local_48;
  
  puVar6 = auStack_90;
  local_58 = (long **)0x0;
  local_50 = (long **)0x0;
  local_48 = (long **)0x0;
  plVar9 = *(long **)(param_2 + 0x10);
  if (plVar9 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    uVar8 = 6;
    do {
      if ((char)plVar9[3] == '\x02') {
        lVar7 = lVar7 + (ulong)((uint)*(ushort *)((long)plVar9 + 0x1a) +
                                (uint)*(byte *)((long)plVar9 + 0x19) + *(int *)((long)plVar9 + 0x1c)
                               );
        uVar4 = *(uint *)(plVar9 + 4);
        if (uVar8 <= *(uint *)(plVar9 + 4)) {
          uVar4 = uVar8;
        }
      }
      else {
        FUN_10037e5ac(&local_78,plVar9 + 3,0,0);
        pplVar3 = local_50;
        if (local_50 < local_48) {
          ppplVar5 = (long ***)(local_50 + 5);
          *local_50 = (long *)plVar9[2];
          FUN_10037eac4(pplVar3 + 1,&local_78);
        }
        else {
          ppplVar5 = &local_58;
          FUN_10038bc68(ppplVar5,plVar9 + 2,&local_78);
        }
        local_50 = (long **)ppplVar5;
        thunk_FUN_10037edac(&local_78);
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
    if (uVar8 < 6) goto LAB_100387efc;
  }
  uVar8 = 4;
LAB_100387efc:
  lVar7 = lVar7 + (ulong)uVar8;
  if (local_58 == local_50) {
    thunk_FUN_10037e7cc(&local_78,0);
  }
  else {
    FUN_10038bc00(&local_78,&local_58);
    uVar1 = (ulong)bStack_77;
    puVar2 = &uStack_76;
    if (local_78 != '\0') {
      uVar1 = CONCAT26(uStack_70,uStack_76);
      puVar2 = local_6e;
    }
    FUN_10037c13c(auStack_90,puVar2,uVar1);
    thunk_FUN_10037c5d4();
    lVar7 = lVar7 + ((ulong)puVar6 & 0xffffffff);
  }
  FUN_10037eac4(param_1,&local_78);
  *(long *)(param_1 + 0x20) = lVar7;
  thunk_FUN_10037edac(&local_78);
  local_78 = (char)&local_58;
  bStack_77 = (byte)((ulong)&local_58 >> 8);
  uStack_76 = (undefined6)((ulong)&local_58 >> 0x10);
  FUN_10038dda4(&local_78);
  return;
}

