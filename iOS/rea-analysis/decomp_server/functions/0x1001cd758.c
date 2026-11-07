// rea decompile_all
// name: FUN_1001cd758
// address: 0x1001cd758
// body: available
// range: 0x1001cd758-0x1001cdaab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cd758(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  undefined1 auStack_1b0 [16];
  ulong local_1a0;
  ulong uStack_198;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  char *local_170;
  char *local_168;
  long local_160 [9];
  undefined1 local_118;
  undefined8 local_110;
  ulong uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  _swift_beginAccess(param_1 + 0x20,auStack_c8,0,0);
  lVar14 = *(long *)(param_1 + 0x20);
  puVar12 = *(undefined8 **)(lVar14 + 0x10);
  local_188 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar12 != (undefined8 *)0x0) {
    puVar7 = puVar12;
    FUN_10006d8b0(puVar12,0);
    puVar8 = &local_b0;
    FUN_1000747c0(puVar8,puVar7 + 4,puVar12,lVar14);
    uVar5 = uStack_98;
    uVar2 = local_a0;
    uVar1 = uStack_a8;
    uVar4 = local_b0;
    uVar13 = CONCAT71(uStack_8f,local_90);
    _swift_bridgeObjectRetain(lVar14);
    FUN_10003f638(uVar4,uVar1,uVar2,uVar5,uVar13);
    local_188 = puVar7;
    if (puVar8 != puVar12) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001cd7fc);
      (*pcVar6)();
    }
  }
  lVar14 = local_188[2];
  if (lVar14 != 0) {
    local_168 = "shouldCloseAfterControllerData";
    local_170 = s__B__ruleId__10089e2c0 + 0x10;
    puVar15 = local_188 + 5;
    uStack_178 = 0xc000000000000000;
    local_180 = 0;
    do {
      uVar1 = puVar15[-1];
      uVar2 = *puVar15;
      _swift_beginAccess(param_1 + 0x20,&local_110,0x21,0);
      uVar9 = uVar1;
      uVar10 = uVar2;
      FUN_1001a3028();
      if ((uVar10 & 1) == 0) {
        _swift_endAccess(&local_110);
      }
      else {
        uVar10 = *(ulong *)(param_1 + 0x20);
        _swift_isUniquelyReferenced_nonNull_native();
        local_160[0] = *(long *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = 0x8000000000000000;
        if ((uVar10 & 1) == 0) {
          FUN_1000658cc();
        }
        lVar3 = local_160[0];
        lVar16 = *(long *)(*(long *)(local_160[0] + 0x38) + uVar9 * 8);
        FUN_10006cf90(uVar9,local_160[0]);
        *(long *)(param_1 + 0x20) = lVar3;
        _swift_endAccess(&local_110);
        if (*(char *)(lVar16 + 0x31) == '\x01') {
          _swift_release(lVar16);
        }
        else {
          *(undefined1 *)(lVar16 + 0x31) = 1;
          uVar13 = *(undefined8 *)(lVar16 + 0x28);
          _swift_retain(uVar13);
          __s7Network12NWConnectionC6cancelyyF();
          _swift_release(uVar13);
          local_118 = 1;
          FUN_100006cdc(0,0xc000000000000000);
          local_b0 = 1;
          uStack_98 = 1;
          local_90 = local_118;
          uStack_80 = uStack_178;
          local_88 = local_180;
          uStack_70 = uStack_178;
          local_78 = local_180;
          local_110 = 1;
          uStack_f8 = 1;
          local_f0 = local_118;
          uStack_e0 = uStack_178;
          local_e8 = local_180;
          uStack_d0 = uStack_178;
          local_d8 = local_180;
          uStack_108 = uVar1;
          local_100 = uVar2;
          uStack_a8 = uVar1;
          local_a0 = uVar2;
          FUN_1001d2ad0(&local_b0,local_160);
          FUN_1001d2d44(&local_110);
          puVar11 = &DAT_1009a33f8;
          _swift_allocObject(&DAT_1009a33f8,0x18,7);
          _swift_weakInit(puVar11 + 0x10,param_1);
          _swift_retain(puVar11);
          FUN_1001cdaac(&local_b0,0x4e4946,0xe300000000000000,thunk_FUN_1001d3780,puVar11,0,0);
          _swift_release_n(puVar11,2);
          FUN_1001d2d44(&local_b0);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_1a0 = uVar1;
          uStack_198 = uVar2;
          FUN_1003fb48c(thunk_FUN_1001d3778,auStack_1b0,0xd0000000000000a1,
                        (ulong)local_168 | 0x8000000000000000,0xd000000000000025,
                        (ulong)local_170 | 0x8000000000000000,0xff,0);
          _swift_release(lVar16);
        }
      }
      puVar15 = puVar15 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  _swift_release(local_188);
  return;
}

