// rea decompile_all
// name: FUN_100048f38
// address: 0x100048f38
// body: available
// range: 0x100048f38-0x1000493b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000493a4) */

void FUN_100048f38(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  ID self;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_180 [16];
  ulong local_170;
  ulong uStack_168;
  undefined8 *local_160;
  undefined *puStack_158;
  undefined *local_148;
  ID local_140;
  ulong local_138;
  undefined1 auStack_128 [88];
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_70;
  
  if (DAT_100a73b20 != -1) {
    _swift_once(&DAT_100a73b20,FUN_100045fac);
  }
  self = DAT_100a75cd0;
  _objc_msgSend(DAT_100a75cd0,"lock");
  uVar10 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar10 = param_3 >> 0x38 & 0xf;
  }
  local_160 = param_1;
  if (uVar10 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_1000498c0,&local_170,0xd00000000000009f,0x800000010087cde0,0xd000000000000011,
                  0x800000010087cfa0,0x2c,0);
  }
  else {
    uVar10 = param_2;
    FUN_1001a11bc(param_2,param_3);
    plVar8 = *(long **)(uVar10 + 0x28);
    pcVar6 = *(code **)(*plVar8 + 0xb0);
    _swift_retain(plVar8);
    (*pcVar6)(&local_d0);
    _swift_release(plVar8);
    _swift_release(uVar10);
    puVar3 = local_d0;
    uVar10 = *(ulong *)(local_d0 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar10 != 0) {
      uVar7 = 0;
      uVar5 = uVar10 - 1;
      puVar2 = local_d0 + 0x20;
      do {
        puVar4 = (undefined8 *)(puVar2 + uVar7 * 0x58);
        uVar11 = uVar7;
        while( true ) {
          if (*(ulong *)(puVar3 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10004934c);
            (*pcVar6)();
          }
          uStack_c8 = puVar4[1];
          local_d0 = (undefined *)*puVar4;
          uStack_b8 = puVar4[3];
          uStack_c0 = puVar4[2];
          uStack_a8 = puVar4[5];
          local_b0 = puVar4[4];
          uStack_98 = puVar4[7];
          local_a0 = puVar4[6];
          uStack_88 = puVar4[9];
          local_90 = puVar4[8];
          local_80 = puVar4[10];
          uVar7 = uVar11 + 1;
          if (local_d0 != (undefined *)*param_1) break;
          puVar4 = puVar4 + 0xb;
          uVar11 = uVar7;
          if (uVar10 == uVar7) goto LAB_1000491c0;
        }
        local_138 = uVar5;
        FUN_10004985c(&local_d0,auStack_128);
        puVar1 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        local_148 = puVar2;
        local_140 = self;
        local_70 = puVar9;
        if (((ulong)puVar1 & 1) == 0) {
          FUN_10006fb9c(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar5 = *(ulong *)(local_70 + 0x10);
        if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar5) {
          FUN_10006fb9c(1 < *(ulong *)(local_70 + 0x18),uVar5 + 1,1);
        }
        *(ulong *)(local_70 + 0x10) = uVar5 + 1;
        *(undefined8 *)(local_70 + uVar5 * 0x58 + 0x28) = uStack_c8;
        *(undefined **)(local_70 + uVar5 * 0x58 + 0x20) = local_d0;
        *(undefined8 *)(local_70 + uVar5 * 0x58 + 0x38) = uStack_b8;
        *(undefined8 *)(local_70 + uVar5 * 0x58 + 0x30) = uStack_c0;
        *(undefined8 *)(local_70 + uVar5 * 0x58 + 0x70) = local_80;
        *(undefined8 *)(local_70 + uVar5 * 0x58 + 0x58) = uStack_98;
        *(undefined8 *)(local_70 + uVar5 * 0x58 + 0x50) = local_a0;
        *(undefined8 *)(local_70 + uVar5 * 0x58 + 0x68) = uStack_88;
        *(undefined8 *)(local_70 + uVar5 * 0x58 + 0x60) = local_90;
        *(undefined8 *)(local_70 + uVar5 * 0x58 + 0x48) = uStack_a8;
        *(undefined8 *)(local_70 + uVar5 * 0x58 + 0x40) = local_b0;
        uVar5 = local_138;
        puVar9 = local_70;
        puVar2 = local_148;
        self = local_140;
      } while (local_138 != uVar11);
    }
LAB_1000491c0:
    _swift_bridgeObjectRelease(puVar3);
    FUN_10004985c(param_1,&local_d0);
    puVar3 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar2 = puVar9;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = (undefined *)0x0;
      FUN_10003437c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar10 = *(ulong *)(puVar2 + 0x10);
    puVar3 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar10) {
      puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
      FUN_10003437c(puVar3,uVar10 + 1,1,puVar2);
    }
    *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
    uVar12 = *param_1;
    uVar14 = param_1[3];
    uVar13 = param_1[2];
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x28) = param_1[1];
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x20) = uVar12;
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x38) = uVar14;
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x30) = uVar13;
    uVar13 = param_1[5];
    uVar12 = param_1[4];
    uVar15 = param_1[7];
    uVar14 = param_1[6];
    uVar17 = param_1[9];
    uVar16 = param_1[8];
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x70) = param_1[10];
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x58) = uVar15;
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x50) = uVar14;
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x68) = uVar17;
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x60) = uVar16;
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x48) = uVar13;
    *(undefined8 *)(puVar3 + uVar10 * 0x58 + 0x40) = uVar12;
    local_d0 = puVar3;
    _swift_bridgeObjectRetain(puVar3);
    FUN_100046bcc(&local_d0);
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = local_d0;
    uVar10 = param_2;
    FUN_1001a11bc(param_2,param_3);
    plVar8 = *(long **)(uVar10 + 0x28);
    pcVar6 = *(code **)(*plVar8 + 0xb8);
    local_d0 = puVar3;
    _swift_retain(puVar3);
    _swift_retain(plVar8);
    (*pcVar6)(&local_d0);
    _swift_release(plVar8);
    _swift_release(uVar10);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    puStack_158 = puVar3;
    local_170 = param_2;
    uStack_168 = param_3;
    FUN_1003fb48c(FUN_1000498b4,auStack_180,0xd00000000000009f,0x800000010087cde0,0xd000000000000011
                  ,0x800000010087cfa0,0x33,0);
    _swift_release(puVar3);
  }
  _objc_msgSend(self,"unlock");
  return;
}

