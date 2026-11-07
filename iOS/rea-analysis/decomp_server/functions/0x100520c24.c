// rea decompile_all
// name: FUN_100520c24
// address: 0x100520c24
// body: available
// range: 0x100520c24-0x100520e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100520e38 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100520c24(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    uVar8 = param_1[0x13];
    puVar4 = (undefined8 *)param_1[0x14];
    uVar9 = param_1[0x12];
    if (((param_1[0xe] & 0x3000000000000000) != 0x2000000000000000) ||
       (*(char *)(param_1 + 0xf) != -1)) {
      param_1[7] = param_1[0xd];
      param_1[6] = param_1[0xc];
      param_1[8] = param_1[0xe];
      *(char *)(param_1 + 9) = *(char *)(param_1 + 0xf);
      param_1[0xb] = param_1[0x11];
      param_1[10] = param_1[0x10];
      _swift_bridgeObjectRetain(uVar8);
      uVar7 = *puVar4;
      _swift_isUniquelyReferenced_nonNull_native(uVar7);
      local_90 = *puVar4;
      FUN_100521354(param_1 + 6,uVar9,uVar8,uVar7);
      _swift_bridgeObjectRelease(uVar8);
      *puVar4 = local_90;
      goto LAB_100520e18;
    }
    _swift_bridgeObjectRetain(uVar8);
    FUN_100520f0c(&local_90,uVar9,uVar8);
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = local_90;
  }
  else {
    uVar1 = param_1[0xe];
    uVar3 = param_1[0xf];
    uVar8 = param_1[0x13];
    puVar4 = (undefined8 *)param_1[0x14];
    uVar9 = param_1[0x12];
    if (((uVar1 & 0x3000000000000000) == 0x2000000000000000) && ((uVar3 & 0xff) == 0xff)) {
      _swift_bridgeObjectRetain(uVar8);
      FUN_100520f0c(&local_90,uVar9,uVar8);
      _swift_bridgeObjectRelease(uVar8);
      FUN_100521d60(local_90,uStack_88,local_80,uStack_78,local_70,uStack_68,FUN_10051ff3c,
                    FUN_100006cdc);
    }
    else {
      uVar7 = param_1[0x10];
      uVar5 = param_1[0x11];
      uVar2 = param_1[0xc];
      uVar6 = param_1[0xd];
      *param_1 = uVar2;
      param_1[1] = uVar6;
      param_1[2] = uVar1;
      *(char *)(param_1 + 3) = (char)uVar3;
      param_1[4] = uVar7;
      param_1[5] = uVar5;
      _swift_bridgeObjectRetain(uVar8);
      FUN_100521d60(uVar2,uVar6,uVar1,uVar3,uVar7,uVar5,FUN_10051fe90,FUN_100008184);
      uVar7 = *puVar4;
      _swift_isUniquelyReferenced_nonNull_native(uVar7);
      local_90 = *puVar4;
      FUN_100521354(param_1,uVar9,uVar8,uVar7);
      _swift_bridgeObjectRelease(uVar8);
      *puVar4 = local_90;
    }
    uStack_88 = param_1[0xd];
    local_80 = param_1[0xe];
    uStack_78 = param_1[0xf];
    local_70 = param_1[0x10];
    uStack_68 = param_1[0x11];
    uVar8 = param_1[0xc];
  }
  FUN_100521d60(uVar8,uStack_88,local_80,uStack_78,local_70,uStack_68,FUN_10051ff3c,FUN_100006cdc);
LAB_100520e18:
  _free(param_1);
  return;
}

