// rea decompile_all
// name: FUN_10067c610
// address: 0x10067c610
// body: available
// range: 0x10067c610-0x10067c9df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10067c6b0 to 0x10067c9e0 FUN_10067c9e0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10067c610(ulong *param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_88 [32];
  long local_68;
  
  puVar3 = &DAT_100ab7e30;
  FUN_100004bb4(&DAT_100ab7e30,&DAT_100848ce8);
  if (puVar3 == param_3) {
    uVar5 = *param_1;
    FUN_10067c9e0(uVar5,param_1[1],param_1[2],param_1[3],param_2);
    return uVar5;
  }
  puVar3 = param_3;
  __sSl7isEmptySbvgTj(param_3,param_4);
  if (((ulong)puVar3 & 1) != 0) {
    (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
    return 0;
  }
  puVar3 = param_3;
  __sSl5countSivgTj(param_3,param_4);
  if ((long)puVar3 < 1) {
    uVar9 = 0;
    uVar8 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar7 = 0;
    uVar5 = 0;
  }
  else {
    pcVar2 = (code *)auStack_88;
    pbVar4 = (byte *)&local_68;
    local_68 = param_2;
    __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar4,param_3,param_4);
    bVar1 = *pbVar4;
    (*pcVar2)(auStack_88,0);
    uVar5 = (ulong)bVar1 << 0x38;
    if (puVar3 == (undefined *)0x1) {
      uVar9 = 0;
      uVar8 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar7 = 0;
    }
    else {
      if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c9c8);
        (*pcVar2)();
      }
      pcVar2 = (code *)auStack_88;
      pbVar4 = (byte *)&local_68;
      local_68 = param_2 + 1;
      __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar4,param_3,param_4);
      bVar1 = *pbVar4;
      (*pcVar2)(auStack_88,0);
      uVar7 = (ulong)bVar1 << 0x30;
      if (puVar3 < (undefined *)0x3) {
        uVar9 = 0;
        uVar8 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
      }
      else {
        if (SCARRY8(param_2,2)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c9cc);
          (*pcVar2)();
        }
        pcVar2 = (code *)auStack_88;
        pbVar4 = (byte *)&local_68;
        local_68 = param_2 + 2;
        __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar4,param_3,param_4);
        bVar1 = *pbVar4;
        (*pcVar2)(auStack_88,0);
        uVar10 = (ulong)bVar1 << 0x28;
        if (puVar3 == (undefined *)0x3) {
          uVar9 = 0;
          uVar8 = 0;
          uVar12 = 0;
          uVar11 = 0;
        }
        else {
          if (SCARRY8(param_2,3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c9d0);
            (*pcVar2)();
          }
          pcVar2 = (code *)auStack_88;
          pbVar4 = (byte *)&local_68;
          local_68 = param_2 + 3;
          __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar4,param_3,param_4);
          bVar1 = *pbVar4;
          (*pcVar2)(auStack_88,0);
          uVar11 = (ulong)bVar1 << 0x20;
          if (puVar3 < (undefined *)0x5) {
            uVar9 = 0;
            uVar8 = 0;
            uVar12 = 0;
          }
          else {
            if (SCARRY8(param_2,4)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c9d4);
              (*pcVar2)();
            }
            pcVar2 = (code *)auStack_88;
            pbVar4 = (byte *)&local_68;
            local_68 = param_2 + 4;
            __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar4,param_3,param_4);
            bVar1 = *pbVar4;
            (*pcVar2)(auStack_88,0);
            uVar12 = (ulong)bVar1 << 0x18;
            if (puVar3 == (undefined *)0x5) {
              uVar9 = 0;
              uVar8 = 0;
            }
            else {
              if (SCARRY8(param_2,5)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c9d8);
                (*pcVar2)();
              }
              pcVar2 = (code *)auStack_88;
              pbVar4 = (byte *)&local_68;
              local_68 = param_2 + 5;
              __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar4,param_3,param_4);
              bVar1 = *pbVar4;
              (*pcVar2)(auStack_88,0);
              uVar8 = (ulong)bVar1 << 0x10;
              if (puVar3 < (undefined *)0x7) {
                uVar9 = 0;
              }
              else {
                if (SCARRY8(param_2,6)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c9dc);
                  (*pcVar2)();
                }
                pcVar2 = (code *)auStack_88;
                pbVar4 = (byte *)&local_68;
                local_68 = param_2 + 6;
                __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar4,param_3,param_4);
                bVar1 = *pbVar4;
                (*pcVar2)(auStack_88,0);
                uVar9 = (ulong)bVar1 << 8;
                if (puVar3 != (undefined *)0x7) {
                  if (SCARRY8(param_2,7)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067c9e0);
                    (*pcVar2)();
                  }
                  pcVar2 = (code *)auStack_88;
                  pbVar4 = (byte *)&local_68;
                  local_68 = param_2 + 7;
                  __sSly7ElementQz5IndexQzcirTj(pcVar2,pbVar4,param_3,param_4);
                  uVar6 = (ulong)*pbVar4;
                  (*pcVar2)(auStack_88,0);
                  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
                  goto LAB_10067c810;
                }
              }
            }
          }
        }
      }
    }
  }
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
  uVar6 = 0;
LAB_10067c810:
  return uVar9 | uVar6 | uVar8 | uVar12 | uVar11 | uVar10 | uVar7 | uVar5;
}

