// rea decompile_all
// name: FUN_1007afcbc
// address: 0x1007afcbc
// body: available
// range: 0x1007afcbc-0x1007afdfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007afcbc(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char local_59;
  undefined1 auStack_58 [56];
  
  lVar2 = param_1;
  FUN_1007ae6e0(param_1,auStack_58,0x10);
  if ((int)lVar2 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x60) == 0) {
    plVar4 = (long *)(param_1 + 0x10);
    plVar3 = plVar4;
    FUN_1007ae6e0(plVar4,auStack_58,8);
    if (((ulong)plVar3 & 1) == 0) {
      return;
    }
  }
  else {
    if ((bVar1 & 1) == 0) {
      plVar4 = (long *)(param_1 + 0x10);
      if ((bVar1 >> 2 & 1) != 0) {
        plVar3 = plVar4;
        FUN_1007ae6e0(plVar4,auStack_58,0x10);
        if ((int)plVar3 == 0) {
          return;
        }
        if ((*(byte *)(param_1 + 8) & 0x60) == 0) {
          plVar4 = plVar4 + ((*(byte *)(param_1 + 8) & 5) != 4);
        }
        else {
          plVar4 = (long *)*plVar4;
        }
        FUN_1007ae6e0(plVar4,&local_59,1);
        if ((int)plVar4 == 0) {
          return;
        }
        if (local_59 == '\0') {
          return;
        }
        goto LAB_1007afd48;
      }
      uVar5 = 0x18;
    }
    else {
      uVar5 = 0x28;
    }
    lVar2 = param_1 + 0x10;
    FUN_1007ae6e0(lVar2,auStack_58,uVar5);
    if ((int)lVar2 == 0) {
      return;
    }
    plVar4 = (long *)(param_1 + 0x18);
  }
  if (*plVar4 < 0) {
    return;
  }
  if (*plVar4 == 0) {
    return;
  }
LAB_1007afd48:
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x60) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x10) + ((bVar1 & 5) != 4);
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
  }
  FUN_1007ae6e0((long)puVar6 + ((ulong)(bVar1 >> 2) & 1),&local_59,1);
  return;
}

