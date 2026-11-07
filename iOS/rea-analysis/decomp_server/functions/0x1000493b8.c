// rea decompile_all
// name: FUN_1000493b8
// address: 0x1000493b8
// body: available
// range: 0x1000493b8-0x10004985b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100049848) */

void FUN_1000493b8(ulong param_1,ulong param_2,undefined *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  ID self;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_180 [16];
  ulong local_170;
  undefined *puStack_168;
  ulong local_160;
  undefined *puStack_158;
  ulong local_148;
  undefined *local_140;
  ID local_138;
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
  uVar9 = param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar9 = (ulong)param_3 >> 0x38 & 0xf;
  }
  local_160 = param_1;
  if (uVar9 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar6 = FUN_1000498ac;
    uVar3 = 0x3e;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) {
      local_138 = self;
      local_148 = param_2;
      local_140 = param_3;
      FUN_1001a11bc(param_2,param_3);
      plVar7 = *(long **)(param_2 + 0x28);
      pcVar6 = *(code **)(*plVar7 + 0xb0);
      _swift_retain(plVar7);
      (*pcVar6)(&local_d0);
      _swift_release(plVar7);
      _swift_release(param_2);
      puVar1 = local_d0;
      uVar9 = *(ulong *)(local_d0 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (uVar9 != 0) {
        uVar10 = 0;
        do {
          if (*(ulong *)(puVar1 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100049830);
            (*pcVar6)();
          }
          puVar4 = (undefined8 *)(puVar1 + uVar10 * 0x58 + 0x20);
          uStack_c8 = puVar4[1];
          puVar11 = (undefined *)*puVar4;
          uStack_b8 = puVar4[3];
          uStack_c0 = puVar4[2];
          uStack_a8 = puVar4[5];
          local_b0 = puVar4[4];
          uStack_98 = puVar4[7];
          local_a0 = puVar4[6];
          uStack_88 = puVar4[9];
          local_90 = puVar4[8];
          local_80 = puVar4[10];
          uVar10 = uVar10 + 1;
          local_d0 = puVar11;
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar2 = *(ulong *)(param_1 + 0x28);
            __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ(uVar2,puVar11);
            uVar5 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
            uVar2 = uVar2 & (uVar5 ^ 0xffffffffffffffff);
            if ((*(ulong *)(param_1 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1
                ) != 0) {
              do {
                if (*(undefined **)(*(long *)(param_1 + 0x30) + uVar2 * 8) == puVar11)
                goto LAB_1000494dc;
                uVar2 = uVar2 + 1 & ~uVar5;
              } while ((*(ulong *)(param_1 + 0x38 + (uVar2 >> 3 & 0xffffffffffffff8)) >>
                        (uVar2 & 0x3f) & 1) != 0);
            }
          }
          FUN_10004985c(&local_d0,auStack_128);
          puVar11 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          local_70 = puVar8;
          if (((ulong)puVar11 & 1) == 0) {
            FUN_10006fb9c(0,*(long *)(puVar8 + 0x10) + 1,1);
          }
          uVar2 = *(ulong *)(local_70 + 0x10);
          if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar2) {
            FUN_10006fb9c(1 < *(ulong *)(local_70 + 0x18),uVar2 + 1,1);
          }
          *(ulong *)(local_70 + 0x10) = uVar2 + 1;
          *(undefined8 *)(local_70 + uVar2 * 0x58 + 0x28) = uStack_c8;
          *(undefined **)(local_70 + uVar2 * 0x58 + 0x20) = local_d0;
          *(undefined8 *)(local_70 + uVar2 * 0x58 + 0x38) = uStack_b8;
          *(undefined8 *)(local_70 + uVar2 * 0x58 + 0x30) = uStack_c0;
          *(undefined8 *)(local_70 + uVar2 * 0x58 + 0x70) = local_80;
          *(undefined8 *)(local_70 + uVar2 * 0x58 + 0x58) = uStack_98;
          *(undefined8 *)(local_70 + uVar2 * 0x58 + 0x50) = local_a0;
          *(undefined8 *)(local_70 + uVar2 * 0x58 + 0x68) = uStack_88;
          *(undefined8 *)(local_70 + uVar2 * 0x58 + 0x60) = local_90;
          *(undefined8 *)(local_70 + uVar2 * 0x58 + 0x48) = uStack_a8;
          *(undefined8 *)(local_70 + uVar2 * 0x58 + 0x40) = local_b0;
          puVar8 = local_70;
LAB_1000494dc:
        } while (uVar10 != uVar9);
      }
      _swift_bridgeObjectRelease(puVar1);
      local_d0 = puVar8;
      _swift_retain(puVar8);
      FUN_100046bcc(&local_d0);
      _swift_release(puVar8);
      puVar8 = local_d0;
      puVar1 = local_140;
      uVar9 = local_148;
      uVar10 = local_148;
      FUN_1001a11bc(local_148,local_140);
      plVar7 = *(long **)(uVar10 + 0x28);
      pcVar6 = *(code **)(*plVar7 + 0xb8);
      local_d0 = puVar8;
      _swift_retain(puVar8);
      _swift_retain(plVar7);
      (*pcVar6)(&local_d0);
      _swift_release(plVar7);
      _swift_release(uVar10);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_170 = uVar9;
      puStack_168 = puVar1;
      puStack_158 = puVar8;
      FUN_1003fb48c(FUN_100049898,auStack_180,0xd00000000000009f,0x800000010087cde0,
                    0xd000000000000017,0x800000010087ce80,0x49,0);
      _swift_release(puVar8);
      self = local_138;
      goto LAB_1000497f8;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar6 = FUN_1000498a4;
    uVar3 = 0x42;
    local_160 = param_2;
    puStack_158 = param_3;
  }
  FUN_1003fb48c(pcVar6,&local_170,0xd00000000000009f,0x800000010087cde0,0xd000000000000017,
                0x800000010087ce80,uVar3,0);
LAB_1000497f8:
  _objc_msgSend(self,"unlock");
  return;
}

