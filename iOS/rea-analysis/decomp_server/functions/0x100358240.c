// rea decompile_all
// name: FUN_100358240
// address: 0x100358240
// body: available
// range: 0x100358240-0x1003586d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100358240(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_c0 [8];
  ulong local_b8;
  ulong uStack_b0;
  long local_a8;
  code *local_a0;
  undefined1 *local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined *local_70;
  ulong uStack_68;
  
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  local_a8 = *(long *)(lVar1 + -8);
  local_98 = auStack_c0 + -(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar16 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar16 = param_2 >> 0x38 & 0xf;
  }
  local_90 = lVar1;
  if (uVar16 == 0) {
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    puVar2 = (undefined1 *)0xf;
    __sSS5index5afterSS5IndexVAD_tF(0xf,param_1,param_2);
    local_88 = 0xb;
    if (((uint)(param_2 >> 0x3c) & (uint)((param_1 & 0x800000000000000) == 0)) == 0) {
      local_88 = 7;
    }
    uVar13 = uVar16 << 2;
    local_78 = param_2;
    if (uVar13 < (ulong)puVar2 >> 0xe) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100358690);
      (*pcVar14)();
    }
    local_88 = local_88 | uVar16 << 0x10;
    puVar8 = puVar2;
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = (undefined1 *)0xf;
    local_b8 = param_3;
    uStack_b0 = param_4;
    local_80 = param_1;
    while( true ) {
      puVar10 = local_98;
      local_70 = (undefined *)param_1;
      uStack_68 = param_2;
      __s10Foundation12CharacterSetV16uppercaseLettersACvgZ(local_98);
      FUN_1002c6438();
      puVar3 = puVar10;
      __sSy10FoundationE16rangeOfCharacter4from7options0B0SnySS5IndexVGSgAA0D3SetV_So22NSStringCompareOptionsVAItF
                (puVar10,0,puVar8,local_88,0,PTR___sSSN_1009957f8,puVar2);
      pcVar14 = *(code **)(local_a8 + 8);
      (*pcVar14)(puVar10,local_90);
      if (((ulong)puVar8 & 1) != 0) break;
      uVar16 = (ulong)puVar3 >> 0xe;
      if (uVar16 < (ulong)puVar4 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100358680);
        (*pcVar14)();
      }
      puVar12 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar12 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_1002969fc(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar11 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_1002969fc(puVar7,uVar11 + 1,1,puVar6);
      }
      param_2 = local_78;
      param_1 = local_80;
      puVar2 = local_98;
      *(ulong *)(puVar7 + 0x10) = uVar11 + 1;
      *(undefined1 **)(puVar7 + uVar11 * 0x10 + 0x20) = puVar4;
      *(undefined1 **)(puVar7 + uVar11 * 0x10 + 0x28) = puVar3;
      if (uVar13 < uVar16) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100358684);
        (*pcVar14)();
      }
      local_70 = (undefined *)local_80;
      uStack_68 = local_78;
      local_a0 = pcVar14;
      __s10Foundation12CharacterSetV16lowercaseLettersACvgZ(local_98);
      puVar8 = (undefined1 *)0x0;
      puVar4 = puVar2;
      puVar10 = puVar3;
      __sSy10FoundationE16rangeOfCharacter4from7options0B0SnySS5IndexVGSgAA0D3SetV_So22NSStringCompareOptionsVAItF
                ();
      (*local_a0)(puVar2,local_90);
      if (((ulong)puVar10 & 1) != 0) goto LAB_10035852c;
      puVar2 = puVar3;
      __sSS5index5afterSS5IndexVAD_tF(puVar3,param_1,param_2);
      if (0x3fff < ((ulong)puVar2 ^ (ulong)puVar4)) {
        __sSS5index6beforeSS5IndexVAD_tF(puVar4,param_1);
        if ((ulong)puVar4 >> 0xe < uVar16) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10035868c);
          (*pcVar14)();
        }
        uVar16 = *(ulong *)(puVar7 + 0x10);
        puVar12 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar16) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          FUN_1002969fc(puVar12,uVar16 + 1,1,puVar7);
        }
        *(ulong *)(puVar12 + 0x10) = uVar16 + 1;
        *(undefined1 **)(puVar12 + uVar16 * 0x10 + 0x20) = puVar3;
        *(undefined1 **)(puVar12 + uVar16 * 0x10 + 0x28) = puVar4;
        puVar2 = puVar4;
        param_2 = local_78;
        puVar3 = puVar4;
        puVar7 = puVar12;
      }
      puVar4 = puVar3;
      if (uVar13 < (ulong)puVar8 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100358688);
        (*pcVar14)();
      }
    }
    uVar16 = (ulong)puVar4 >> 0xe;
    puVar3 = puVar4;
LAB_10035852c:
    uVar11 = local_80;
    if (uVar13 < uVar16) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100358694);
      (*pcVar14)();
    }
    puVar12 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar12 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_1002969fc(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar16 = *(ulong *)(puVar6 + 0x10);
    lVar1 = uVar16 + 1;
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar16) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_1002969fc(puVar7,lVar1,1,puVar6);
    }
    *(long *)(puVar7 + 0x10) = lVar1;
    *(undefined1 **)(puVar7 + uVar16 * 0x10 + 0x20) = puVar3;
    *(ulong *)(puVar7 + uVar16 * 0x10 + 0x28) = local_88;
    local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1002c0aec(0,lVar1,0);
    puVar15 = (undefined8 *)(puVar7 + 0x28);
    do {
      puVar12 = local_70;
      uVar5 = puVar15[-1];
      uVar9 = *puVar15;
      uVar16 = local_78;
      __sSSySsSnySS5IndexVGcig(uVar5,uVar9,uVar11,local_78);
      __sSs10lowercasedSSyF();
      _swift_bridgeObjectRelease(uVar16);
      uVar16 = *(ulong *)(puVar12 + 0x10);
      local_70 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar16) {
        FUN_1002c0aec(1 < *(ulong *)(puVar12 + 0x18),uVar16 + 1,1);
      }
      puVar12 = local_70;
      puVar15 = puVar15 + 2;
      *(ulong *)(local_70 + 0x10) = uVar16 + 1;
      *(undefined8 *)(local_70 + uVar16 * 0x10 + 0x20) = uVar5;
      *(undefined8 *)(local_70 + uVar16 * 0x10 + 0x28) = uVar9;
      lVar1 = lVar1 + -1;
      uVar11 = local_80;
    } while (lVar1 != 0);
    _swift_bridgeObjectRelease(puVar7);
    puVar7 = &DAT_100a82770;
    local_70 = puVar12;
    FUN_100004bb4(&DAT_100a82770,&DAT_1008186c0);
    puVar6 = puVar7;
    FUN_100280754();
    param_1 = local_b8;
    param_2 = uStack_b0;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(local_b8,uStack_b0,puVar7,puVar6);
    _swift_bridgeObjectRelease(puVar12);
  }
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
  return auVar17;
}

