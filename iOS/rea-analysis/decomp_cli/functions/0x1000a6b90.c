// rea decompile_all
// name: FUN_1000a6b90
// address: 0x1000a6b90
// body: available
// range: 0x1000a6b90-0x1000a6e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a6b90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  undefined *local_260;
  undefined1 auStack_238 [96];
  byte local_1d8;
  undefined1 auStack_1a0 [144];
  long local_110;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_70 [2];
  
  uVar14 = 0;
  uVar10 = *(ulong *)(param_5 + 0x10);
  local_260 = PTR___swiftEmptyArrayStorage_1000f0740;
  do {
    plVar11 = (long *)(param_5 + 0x28 + uVar14 * 0x10);
    uVar15 = uVar14;
    do {
      if (uVar10 == uVar15) {
        FUN_1000a4860(param_2,param_3,param_4);
        *param_1 = param_2;
        param_1[1] = param_3;
        *(char *)(param_1 + 2) = (char)param_4;
        param_1[3] = local_260;
        *(undefined1 *)(param_1 + 4) = 0;
        return;
      }
      if (uVar10 <= uVar15) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1000a6e3c);
        (*pcVar16)();
      }
      uVar14 = uVar15 + 1;
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1000a6e40);
        (*pcVar16)();
      }
      lVar1 = plVar11[-1];
      lVar3 = *plVar11;
      pcVar16 = *(code **)(lVar3 + 0x10);
      (*pcVar16)(auStack_238,lVar1,lVar3);
      FUN_10006e954(auStack_238);
      uVar15 = uVar15 + 1;
      plVar11 = plVar11 + 2;
    } while ((local_1d8 & 1) == 0);
    lVar6 = lVar1;
    lVar9 = lVar3;
    (**(code **)(lVar3 + 0x18))();
    (*pcVar16)(auStack_1a0,lVar1,lVar3);
    lVar5 = local_110;
    local_70[0] = local_110;
    _swift_bridgeObjectRetain(local_110);
    FUN_10006e954(auStack_1a0);
    lVar13 = *(long *)(lVar5 + 0x10);
    if (lVar13 != 0) {
      puVar12 = (undefined8 *)(lVar5 + 0x28);
      do {
        uVar2 = puVar12[-1];
        uVar4 = *puVar12;
        _swift_bridgeObjectRetain(uVar4);
        __sSS6appendyySSF(uVar2,uVar4);
        _swift_bridgeObjectRelease(uVar4);
        __sSS6appendyySSF(0x202c,0xe200000000000000);
        _swift_bridgeObjectRelease(0xe200000000000000);
        puVar12 = puVar12 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    FUN_10001fc18(local_70,&DAT_100103ed8,&DAT_1000d5be0);
    if ((*(long *)(param_6 + 0x78) != 0) && (lVar1 == *(long *)(param_6 + 0x78))) {
      __sSS6appendyySSF(0x6c75616665642820,0xea00000000002974);
    }
    (*pcVar16)(auStack_108,lVar1,lVar3);
    uVar4 = uStack_e0;
    uVar2 = local_e8;
    _swift_bridgeObjectRetain(uStack_e0);
    FUN_10006e954(auStack_108);
    puVar7 = local_260;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar8 = local_260;
    if (((ulong)puVar7 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_10006fa10(0,*(long *)(local_260 + 0x10) + 1,1,local_260);
    }
    uVar15 = *(ulong *)(puVar8 + 0x10);
    local_260 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar15) {
      local_260 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_10006fa10(local_260,uVar15 + 1,1,puVar8);
    }
    *(ulong *)(local_260 + 0x10) = uVar15 + 1;
    *(long *)(local_260 + uVar15 * 0x40 + 0x20) = lVar6;
    *(long *)(local_260 + uVar15 * 0x40 + 0x28) = lVar9;
    *(undefined8 *)(local_260 + uVar15 * 0x40 + 0x30) = uVar2;
    *(undefined8 *)(local_260 + uVar15 * 0x40 + 0x38) = uVar4;
    *(undefined8 *)(local_260 + uVar15 * 0x40 + 0x40) = 0;
    *(undefined8 *)(local_260 + uVar15 * 0x40 + 0x48) = 0;
    *(undefined8 *)(local_260 + uVar15 * 0x40 + 0x58) = 0xf000000000000007;
    *(undefined8 *)(local_260 + uVar15 * 0x40 + 0x50) = 0xf000000000000007;
    param_4 = param_4 & 0xffffffff;
  } while( true );
}

