// rea decompile_all
// name: FUN_1006a9ffc
// address: 0x1006a9ffc
// body: available
// range: 0x1006a9ffc-0x1006aa37b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a9ffc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_1006aa01c:
    plVar5 = (long *)plVar7[1];
    if (plVar5 == (long *)0x0) {
      puVar9 = (undefined8 *)plVar7[2];
      bVar3 = true;
      goto LAB_1006aa040;
    }
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar7 = plVar4;
        plVar4 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
      goto LAB_1006aa01c;
    }
  }
  bVar3 = false;
  puVar9 = (undefined8 *)plVar7[2];
  plVar5[2] = (long)puVar9;
LAB_1006aa040:
  plVar4 = (long *)*puVar9;
  if (plVar4 == plVar7) {
    *puVar9 = plVar5;
    if (plVar7 == param_1) {
      plVar4 = (long *)0x0;
      param_1 = plVar5;
    }
    else {
      plVar4 = (long *)puVar9[1];
    }
  }
  else {
    puVar9[1] = plVar5;
  }
  lVar10 = plVar7[3];
  plVar8 = param_1;
  if (plVar7 != param_2) {
    puVar9 = (undefined8 *)param_2[2];
    plVar7[2] = (long)puVar9;
    puVar9[(long *)*puVar9 != param_2] = plVar7;
    lVar1 = *param_2;
    lVar2 = param_2[1];
    *(long **)(lVar1 + 0x10) = plVar7;
    *plVar7 = lVar1;
    plVar7[1] = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar7;
    }
    *(char *)(plVar7 + 3) = (char)param_2[3];
    plVar8 = plVar7;
    if (param_1 != param_2) {
      plVar8 = param_1;
    }
  }
  if ((plVar8 != (long *)0x0) && ((char)lVar10 != '\0')) {
    if (bVar3) {
      while( true ) {
        plVar5 = (long *)plVar4[2];
        plVar6 = (long *)*plVar5;
        plVar7 = plVar8;
        if (plVar6 == plVar4) break;
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar5 + 3) = 0;
          plVar7 = (long *)plVar5[1];
          lVar10 = *plVar7;
          plVar5[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar5;
          }
          puVar9 = (undefined8 *)plVar5[2];
          plVar7[2] = (long)puVar9;
          puVar9[(long *)*puVar9 != plVar5] = plVar7;
          *plVar7 = (long)plVar5;
          plVar5[2] = (long)plVar7;
          plVar7 = plVar4;
          if (plVar8 != (long *)*plVar4) {
            plVar7 = plVar8;
          }
          plVar4 = (long *)((long *)*plVar4)[1];
        }
        plVar5 = (long *)*plVar4;
        if ((plVar5 != (long *)0x0) && ((char)plVar5[3] != '\x01')) {
          plVar8 = (long *)plVar4[1];
          if (plVar8 != (long *)0x0) goto LAB_1006aa234;
LAB_1006aa240:
          *(undefined1 *)(plVar5 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar10 = plVar5[1];
          *plVar4 = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar4;
          }
          puVar9 = (undefined8 *)plVar4[2];
          plVar5[2] = (long)puVar9;
          puVar9[(long *)*puVar9 != plVar4] = plVar5;
          plVar5[1] = (long)plVar4;
          plVar4[2] = (long)plVar5;
          plVar6 = plVar5;
          plVar8 = plVar4;
LAB_1006aa288:
          plVar7 = (long *)plVar6[2];
          *(char *)(plVar6 + 3) = (char)plVar7[3];
          *(undefined1 *)(plVar7 + 3) = 1;
          *(undefined1 *)(plVar8 + 3) = 1;
          plVar5 = (long *)plVar7[1];
          lVar10 = *plVar5;
          plVar7[1] = lVar10;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 0x10) = plVar7;
          }
          puVar9 = (undefined8 *)plVar7[2];
          plVar5[2] = (long)puVar9;
          puVar9[(long *)*puVar9 != plVar7] = plVar5;
          *plVar5 = (long)plVar7;
LAB_1006aa374:
          plVar7[2] = (long)plVar5;
          return;
        }
        plVar8 = (long *)plVar4[1];
        if ((plVar8 != (long *)0x0) && ((char)plVar8[3] != '\x01')) {
LAB_1006aa234:
          plVar6 = plVar4;
          if ((char)plVar8[3] == '\x01') goto LAB_1006aa240;
          goto LAB_1006aa288;
        }
        *(undefined1 *)(plVar4 + 3) = 0;
        plVar5 = (long *)plVar4[2];
        if ((plVar5 == plVar7) || ((*(byte *)(plVar5 + 3) & 1) == 0)) goto LAB_1006aa220;
LAB_1006aa1fc:
        plVar4 = (long *)((undefined8 *)plVar5[2])[*(long **)plVar5[2] == plVar5];
        plVar8 = plVar7;
      }
      if ((*(byte *)(plVar4 + 3) & 1) == 0) {
        *(undefined1 *)(plVar4 + 3) = 1;
        *(undefined1 *)(plVar5 + 3) = 0;
        lVar10 = plVar6[1];
        *plVar5 = lVar10;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 0x10) = plVar5;
        }
        puVar9 = (undefined8 *)plVar5[2];
        plVar6[2] = (long)puVar9;
        puVar9[(long *)*puVar9 != plVar5] = plVar6;
        plVar6[1] = (long)plVar5;
        plVar5[2] = (long)plVar6;
        plVar7 = plVar4;
        if (plVar8 != (long *)plVar4[1]) {
          plVar7 = plVar8;
        }
        plVar4 = *(long **)plVar4[1];
      }
      plVar5 = (long *)*plVar4;
      if ((plVar5 == (long *)0x0) || (plVar8 = plVar4, (char)plVar5[3] == '\x01')) {
        plVar8 = (long *)plVar4[1];
        if ((plVar8 == (long *)0x0) || ((char)plVar8[3] == '\x01')) {
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar5 = (long *)plVar4[2];
          if ((char)plVar5[3] == '\x01' && plVar5 != plVar7) goto LAB_1006aa1fc;
LAB_1006aa220:
          *(undefined1 *)(plVar5 + 3) = 1;
          return;
        }
        if (plVar5 != (long *)0x0) {
          plVar8 = plVar4;
          if ((*(byte *)(plVar5 + 3) & 1) == 0) goto LAB_1006aa32c;
          plVar8 = (long *)plVar4[1];
        }
        *(undefined1 *)(plVar8 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        lVar10 = *plVar8;
        plVar4[1] = lVar10;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 0x10) = plVar4;
        }
        puVar9 = (undefined8 *)plVar4[2];
        plVar8[2] = (long)puVar9;
        puVar9[(long *)*puVar9 != plVar4] = plVar8;
        *plVar8 = (long)plVar4;
        plVar4[2] = (long)plVar8;
        plVar5 = plVar4;
      }
LAB_1006aa32c:
      plVar7 = (long *)plVar8[2];
      *(char *)(plVar8 + 3) = (char)plVar7[3];
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      plVar5 = (long *)*plVar7;
      lVar10 = plVar5[1];
      *plVar7 = lVar10;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 0x10) = plVar7;
      }
      puVar9 = (undefined8 *)plVar7[2];
      plVar5[2] = (long)puVar9;
      puVar9[(long *)*puVar9 != plVar7] = plVar5;
      plVar5[1] = (long)plVar7;
      goto LAB_1006aa374;
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}

