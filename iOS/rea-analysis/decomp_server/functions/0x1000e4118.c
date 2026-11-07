// rea decompile_all
// name: FUN_1000e4118
// address: 0x1000e4118
// body: available
// range: 0x1000e4118-0x1000e429f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000e4118(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  long extraout_x12;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  code *pcVar11;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  local_68 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_68 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar6 = (long)puVar5 - extraout_x12;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == *(long *)(param_2 + 0x10)) {
    if ((lVar7 == 0) || (param_1 == param_2)) {
      uVar10 = 1;
    }
    else {
      uVar4 = (ulong)*(byte *)(local_68 + 0x50) + 0x20 &
              ((ulong)*(byte *)(local_68 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar4;
      param_2 = param_2 + uVar4;
      lVar8 = *(long *)(local_68 + 0x48);
      pcVar9 = *(code **)(local_68 + 0x10);
      do {
        (*pcVar9)(uVar6,param_1,lVar2);
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1000e42a0);
          (*pcVar9)();
        }
        (*pcVar9)(puVar5,param_2,lVar2);
        puVar3 = &DAT_100a77e68;
        FUN_100005c90(&DAT_100a77e68,PTR___s10Foundation3URLVMa_100996188,
                      PTR___s10Foundation3URLVSQAAMc_1009961a8);
        uVar4 = uVar6;
        __sSQ2eeoiySbx_xtFZTj(uVar6,puVar5,lVar2,puVar3);
        uVar10 = (uint)uVar4;
        pcVar11 = *(code **)(local_68 + 8);
        (*pcVar11)(puVar5,lVar2);
        (*pcVar11)(uVar6,lVar2);
        if ((uVar4 & 1) == 0) break;
        param_2 = param_2 + lVar8;
        param_1 = param_1 + lVar8;
        bVar1 = lVar7 != 1;
        lVar7 = lVar7 + -1;
      } while (bVar1);
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10 & 1;
}

