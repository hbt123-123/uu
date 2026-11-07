// rea decompile_all
// name: FUN_100037db8
// address: 0x100037db8
// body: available
// range: 0x100037db8-0x100037e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100037db8(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    puVar4 = (undefined8 *)(lVar3 + param_3 * 0x30);
    param_1 = param_1 - param_3;
    lVar6 = param_1;
    puVar5 = puVar4;
LAB_100037dfc:
    do {
      bVar2 = *(int *)(puVar4 + -4) < *(int *)(puVar4 + 2);
      if (*(int *)((long)puVar4 + 0xc) != *(int *)((long)puVar4 + -0x24)) {
        bVar2 = *(int *)((long)puVar4 + -0x24) < *(int *)((long)puVar4 + 0xc);
      }
      if (bVar2) {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100037e70);
          (*pcVar1)();
        }
        puVar7 = puVar4 + -6;
        uVar10 = puVar4[1];
        uVar9 = *puVar4;
        uVar8 = puVar4[2];
        uStack_18 = (undefined1)puVar4[3];
        uStack_17 = (undefined7)*(undefined8 *)((long)puVar4 + 0x19);
        puVar4[1] = puVar4[-5];
        *puVar4 = *puVar7;
        puVar4[3] = puVar4[-3];
        puVar4[2] = puVar4[-4];
        puVar4[5] = puVar4[-1];
        puVar4[4] = puVar4[-2];
        *(undefined8 *)((long)puVar4 + -0xf) = *(undefined8 *)((long)puVar4 + 0x21);
        *(undefined8 *)((long)puVar4 + -0x17) = *(undefined8 *)((long)puVar4 + 0x19);
        puVar4[-5] = uVar10;
        *puVar7 = uVar9;
        puVar4[-3] = CONCAT71(uStack_17,uStack_18);
        puVar4[-4] = uVar8;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar4 = puVar7;
        if (bVar2) goto LAB_100037dfc;
      }
      param_3 = param_3 + 1;
      puVar4 = puVar5 + 6;
      param_1 = lVar6 + -1;
      lVar6 = param_1;
      puVar5 = puVar4;
    } while (param_3 != param_2);
  }
  return;
}

