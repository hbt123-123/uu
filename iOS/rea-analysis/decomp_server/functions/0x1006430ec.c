// rea decompile_all
// name: FUN_1006430ec
// address: 0x1006430ec
// body: available
// range: 0x1006430ec-0x1006433ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006430ec(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_80;
  ulong uStack_78;
  char local_70;
  ulong local_68;
  
  if ((param_2[4] & 1) == 0) {
    if (((byte)param_3[4] & 1) != 0) {
      uVar7 = *param_2;
      uVar3 = param_2[1];
      cVar1 = (char)param_2[2];
      uVar10 = param_2[3];
      uVar6 = *param_3;
      uVar9 = param_3[1];
      cVar2 = (char)param_3[2];
      uVar11 = param_3[3];
      uVar5 = uVar7;
      FUN_10064b1b4(uVar7,uVar3,cVar1,uVar10,uVar6,uVar9,cVar2,uVar11);
      if (uVar5 == 0xffffffffffffffff) {
        local_80 = uVar6;
        uStack_78 = uVar9;
        local_70 = cVar2;
        local_68 = uVar11;
        FUN_100643424(param_3,&local_b0);
        FUN_10065eb84(uVar7,uVar3,cVar1,uVar10,0);
        if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10064334c);
          (*pcVar4)();
        }
        goto LAB_100643384;
      }
      local_80 = uVar7;
      uStack_78 = uVar3;
      local_70 = cVar1;
      local_68 = uVar10;
      FUN_100643424(param_2,&local_b0);
      FUN_10065eb84(uVar6,uVar9,cVar2,uVar11,0);
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100643214);
        (*pcVar4)();
      }
LAB_100643294:
      uVar8 = 0;
      local_b0 = local_80;
      uStack_a8 = uStack_78;
      local_98 = local_68;
      goto LAB_1006433b8;
    }
    uStack_a8 = param_2[1];
    local_b0 = *param_2;
    local_a0 = param_2[2];
    local_98 = param_2[3];
    uVar7 = *param_3;
    uVar6 = param_3[1];
    uVar9 = param_3[3];
    uVar3 = param_3[2];
    _swift_bridgeObjectRetain();
    FUN_100642874(uVar7,uVar6,(char)uVar3,uVar9,0);
    local_70 = (char)local_a0;
    if ((char)local_a0 == '\0') {
      if (local_b0 != 0 || uStack_a8 != 0) {
        local_70 = '\0';
      }
    }
    else if (((char)local_a0 != '\x01') && (*(long *)(local_98 + 0x10) != 0)) {
      uVar8 = 0;
      local_70 = '\x02';
      goto LAB_1006433b8;
    }
LAB_1006433b4:
    uVar8 = 0;
  }
  else {
    if ((byte)param_3[4] == 0) {
      uVar7 = *param_3;
      uVar3 = param_3[1];
      cVar1 = (char)param_3[2];
      uVar10 = param_3[3];
      uVar6 = *param_2;
      uVar9 = param_2[1];
      cVar2 = (char)param_2[2];
      uVar11 = param_2[3];
      uVar5 = uVar7;
      FUN_10064b1b4(uVar7,uVar3,cVar1,uVar10,uVar6,uVar9,cVar2,uVar11);
      if (uVar5 != 0xffffffffffffffff) {
        local_80 = uVar7;
        uStack_78 = uVar3;
        local_70 = cVar1;
        local_68 = uVar10;
        FUN_100643424(param_3,&local_b0);
        FUN_10065eb84(uVar6,uVar9,cVar2,uVar11,0);
        if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1006433ec);
          (*pcVar4)();
        }
        goto LAB_100643294;
      }
      local_80 = uVar6;
      uStack_78 = uVar9;
      local_70 = cVar2;
      local_68 = uVar11;
      FUN_100643424(param_2,&local_b0);
      FUN_10065eb84(uVar7,uVar3,cVar1,uVar10,0);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006433f0);
        (*pcVar4)();
      }
LAB_100643384:
      local_b0 = local_80;
      uStack_a8 = uStack_78;
      local_98 = local_68;
      local_a0._0_1_ = local_70;
      if (local_70 == '\0') goto LAB_100643394;
LAB_100643170:
      local_70 = '\x01';
      if ((char)local_a0 != '\x01') {
        local_70 = (char)local_a0;
        if (*(long *)(local_98 + 0x10) != 0) {
          uVar8 = 1;
          local_70 = '\x02';
          goto LAB_1006433b8;
        }
        goto LAB_1006433b4;
      }
    }
    else {
      uStack_a8 = param_2[1];
      local_b0 = *param_2;
      local_a0 = param_2[2];
      local_98 = param_2[3];
      uVar7 = *param_3;
      uVar6 = param_3[1];
      uVar9 = param_3[3];
      uVar3 = param_3[2];
      _swift_bridgeObjectRetain();
      FUN_100642874(uVar7,uVar6,(char)uVar3,uVar9,0);
      if ((char)local_a0 != '\0') goto LAB_100643170;
LAB_100643394:
      local_70 = (char)local_a0;
      if (local_b0 == 0 && uStack_a8 == 0) goto LAB_1006433b4;
      local_70 = '\0';
    }
    uVar8 = 1;
  }
LAB_1006433b8:
  *param_1 = local_b0;
  param_1[1] = uStack_a8;
  *(char *)(param_1 + 2) = local_70;
  param_1[3] = local_98;
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}

