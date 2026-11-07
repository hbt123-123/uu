// rea decompile_all
// name: FUN_1006a9db0
// address: 0x1006a9db0
// body: available
// range: 0x1006a9db0-0x1006a9f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a9db0(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (*(byte *)(plVar3 + 3) & 1) != 0)) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar4 = (long *)*plVar2;
    if (plVar4 == plVar3) {
      if ((plVar2[1] == 0) || (plVar7 = (long *)(plVar2[1] + 0x18), *(char *)plVar7 == '\x01')) {
        if ((long *)*plVar3 != param_2) {
          plVar7 = (long *)plVar3[1];
          lVar5 = *plVar7;
          plVar3[1] = lVar5;
          plVar4 = plVar3;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
            plVar4 = (long *)*plVar2;
          }
          plVar7[2] = (long)plVar2;
          plVar2[plVar4 != plVar3] = (long)plVar7;
          *plVar7 = (long)plVar3;
          plVar3[2] = (long)plVar7;
          plVar2 = (long *)plVar7[2];
          plVar4 = (long *)*plVar2;
          plVar3 = plVar7;
        }
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        lVar5 = plVar4[1];
        *plVar2 = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar2;
        }
        puVar6 = (undefined8 *)plVar2[2];
        plVar4[2] = (long)puVar6;
        puVar6[(long *)*puVar6 != plVar2] = plVar4;
        plVar4[1] = (long)plVar2;
        plVar2[2] = (long)plVar4;
        return;
      }
    }
    else if ((plVar4 == (long *)0x0) || (plVar7 = plVar4 + 3, (char)*plVar7 == '\x01')) {
      plVar4 = (long *)*plVar3;
      if (plVar4 == param_2) {
        lVar5 = plVar4[1];
        *plVar3 = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        plVar4[2] = (long)plVar2;
        plVar2[(long *)*plVar2 != plVar3] = (long)plVar4;
        plVar4[1] = (long)plVar3;
        plVar3[2] = (long)plVar4;
        plVar2 = (long *)plVar4[2];
        plVar3 = plVar4;
      }
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar3 = (long *)plVar2[1];
      lVar5 = *plVar3;
      plVar2[1] = lVar5;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar2;
      }
      puVar6 = (undefined8 *)plVar2[2];
      plVar3[2] = (long)puVar6;
      puVar6[(long *)*puVar6 != plVar2] = plVar3;
      *plVar3 = (long)plVar2;
      plVar2[2] = (long)plVar3;
      return;
    }
    *(undefined1 *)(plVar3 + 3) = 1;
    bVar1 = plVar2 == param_1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar7 = '\x01';
    param_2 = plVar2;
  } while( true );
}

