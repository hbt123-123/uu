// rea decompile_all
// name: FUN_10064d924
// address: 0x10064d924
// body: available
// range: 0x10064d924-0x10064dab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10064d924(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong local_b0;
  ulong uStack_a8;
  char local_a0;
  ulong local_98;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_68;
  
  uStack_78 = unaff_x20[1];
  local_80 = *unaff_x20;
  local_68 = unaff_x20[3];
  local_70 = unaff_x20[2];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  cVar3 = (char)param_2[2];
  uVar7 = param_2[3];
  uVar5 = uVar1;
  FUN_10065fef8(uVar1,uVar2,cVar3,uVar7);
  FUN_100643424(param_2,&local_b0);
  FUN_100643424();
  uVar6 = uVar7;
  FUN_10064fbe0(uVar1,uVar2,cVar3,uVar7,uVar5);
  FUN_10064d170();
  _swift_bridgeObjectRelease(uVar6);
  uVar5 = local_68;
  local_a0 = (char)local_70;
  local_98 = uVar5;
  local_b0 = local_80;
  uStack_a8 = uStack_78;
  if ((char)unaff_x20[4] == '\x01') {
    if ((char)local_70 == '\0') {
      if (local_80 == 0 && uStack_78 == 0) {
        FUN_1006433f0(param_2);
        local_a0 = '\0';
        local_b0 = 0;
        uStack_a8 = 0;
        goto LAB_10064da80;
      }
    }
    else if (((char)local_70 != '\x01') && (*(long *)(local_68 + 0x10) == 0)) {
      FUN_1006433f0(param_2);
      local_a0 = '\x02';
      goto LAB_10064da80;
    }
    uVar6 = local_80;
    local_b0 = uVar1;
    uStack_a8 = uVar2;
    local_a0 = cVar3;
    local_98 = uVar7;
    FUN_10065eb84(local_80,uStack_78,local_70 & 0xff,local_68,0);
    _swift_bridgeObjectRelease(uVar5);
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10064dab4);
      (*pcVar4)();
    }
  }
  else {
    FUN_1006433f0(param_2);
  }
LAB_10064da80:
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  *(char *)(param_1 + 2) = local_a0;
  param_1[3] = local_98;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

