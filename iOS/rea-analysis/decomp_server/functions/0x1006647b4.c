// rea decompile_all
// name: FUN_1006647b4
// address: 0x1006647b4
// body: available
// range: 0x1006647b4-0x1006648cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006647b4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  long local_68;
  long local_58;
  
  lVar6 = *(long *)(param_5 + -8);
  puVar8 = auStack_80 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __sSl10startIndex0B0QzvgTj(&local_58,param_5,param_6);
  __sSl8endIndex0B0QzvgTj(&local_68,param_5,param_6);
  if (local_58 < local_68) {
    lVar5 = 0;
    lVar10 = *param_1;
    pcVar7 = *(code **)(lVar6 + 0x10);
    lVar9 = local_58;
    do {
      (*pcVar7)(puVar8,param_3,param_5);
      puVar4 = puVar8;
      FUN_10067c610(puVar8,lVar9,param_5,param_6);
      uVar2 = ((ulong)puVar4 & 0xff00ff00ff00ff00) >> 8 | ((ulong)puVar4 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      *(ulong *)(lVar10 + lVar5 * 8) = uVar2 >> 0x20 | uVar2 << 0x20;
      lVar6 = lVar5 + 1;
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006648d0);
        (*pcVar7)();
      }
      bVar3 = SCARRY8(lVar9,8);
      lVar1 = lVar9 + 8;
      lVar9 = 0x7fffffffffffffff;
      if (!bVar3) {
        lVar9 = lVar1;
      }
      lVar5 = lVar5 + 1;
    } while (lVar9 < local_68);
  }
  else {
    lVar6 = 0;
  }
  *param_2 = lVar6;
  return;
}

