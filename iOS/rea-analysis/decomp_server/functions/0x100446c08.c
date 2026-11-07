// rea decompile_all
// name: FUN_100446c08
// address: 0x100446c08
// body: available
// range: 0x100446c08-0x100446d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100446d24) */

void FUN_100446c08(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long unaff_x21;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0xf000000000000000;
  uVar7 = *param_1;
  uVar5 = param_1[2];
  puVar3 = param_1;
  if (uVar7 < 0xffffffff00000000 && (uVar5 & 0x3000000000000000) == 0) {
    uVar8 = param_1[1];
    FUN_10020376c(uVar7,uVar8,uVar5,FUN_100008184);
    puVar3 = (ulong *)0x0;
    switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
    local_78 = uVar7 & 0xffffffff;
    uStack_70 = uVar8;
    local_68 = uVar5;
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_100448468();
  (*pcVar6)(&local_78,&DAT_1009c13c0,puVar3,param_3,param_4);
  uVar2 = local_68;
  uVar1 = uStack_70;
  uVar8 = local_78;
  if ((unaff_x21 == 0) && (local_68 >> 0x3c < 0xf)) {
    if ((uVar5 & 0x3000000000000000) == 0 && 0xfffffffeffffffff < uVar7) {
      FUN_100008184(uStack_70,local_68);
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      FUN_100008184(uStack_70,local_68);
      (*pcVar6)(param_3,param_4);
    }
    switchD_10004048c::caseD_6d(local_78,uStack_70,local_68);
    uVar5 = *param_1;
    uVar7 = param_1[1];
    uVar4 = param_1[2];
    *param_1 = uVar8 & 0xffffffff;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    FUN_10020373c(uVar5,uVar7,uVar4);
  }
  else {
    switchD_10004048c::caseD_6d(local_78,uStack_70,local_68);
  }
  return;
}

