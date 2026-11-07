// rea decompile_all
// name: FUN_100079b04
// address: 0x100079b04
// body: available
// range: 0x100079b04-0x100079fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100079b04(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_168 [16];
  undefined1 auStack_e8 [24];
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((*(long *)(param_7 + 0xb8) == param_6) && (param_2 < *(long *)(param_1 + 0x10))) {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100079fcc);
      (*pcVar3)();
    }
    lVar7 = param_1 + param_2 * 0x58;
    uStack_a8 = *(undefined8 *)(lVar7 + 0x48);
    local_b0 = *(undefined8 *)(lVar7 + 0x40);
    uStack_98 = *(undefined8 *)(lVar7 + 0x58);
    uStack_a0 = *(undefined8 *)(lVar7 + 0x50);
    uStack_88 = *(undefined8 *)(lVar7 + 0x68);
    local_90 = *(undefined8 *)(lVar7 + 0x60);
    local_80 = *(undefined8 *)(lVar7 + 0x70);
    uStack_c8 = *(undefined8 *)(lVar7 + 0x28);
    local_d0 = *(long *)(lVar7 + 0x20);
    local_b8 = *(undefined8 *)(lVar7 + 0x38);
    uStack_c0 = *(undefined8 *)(lVar7 + 0x30);
    puVar6 = auStack_e8;
    _swift_beginAccess(param_7 + 0x70,puVar6,0,0);
    lVar7 = local_d0;
    uVar8 = *(ulong *)(*(long *)(param_7 + 0x70) + 0x10);
    if (uVar8 < 3) {
      lVar2 = param_3 + *(long *)(param_4 + 0x10);
      if (SCARRY8(param_3,*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100079fd0);
        (*pcVar3)();
      }
      if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100079fd4);
        (*pcVar3)();
      }
      if (0xfffffffffffffffc < local_d0 - 4U) {
        bVar1 = lVar2 + 1 < 6;
        if (uVar8 != 0) goto LAB_100079c9c;
LAB_100079ca8:
        if (bVar1) {
          uVar8 = 1;
          FUN_1000457e0(local_b8,local_b0);
          if ((uVar8 & 1) == 0) {
            puVar5 = &DAT_1009985d0;
            _swift_allocObject(&DAT_1009985d0,0x18,7);
            _swift_weakInit(puVar5 + 0x10,param_7);
            _swift_retain_n(param_15,3);
            _swift_retain_n(param_17,3);
            _swift_retain_n(param_8,2);
            _swift_bridgeObjectRetain_n(param_10,2);
            _swift_bridgeObjectRetain_n(param_12,2);
            _swift_bridgeObjectRetain_n(param_13,2);
            _swift_bridgeObjectRetain_n(param_14,2);
            _swift_bridgeObjectRetain(param_5);
            FUN_10004985c(&local_d0,local_168);
            _swift_retain(puVar5);
            _swift_bridgeObjectRetain(param_1);
            _swift_bridgeObjectRetain(param_4);
            FUN_1000768b8(&local_d0,PTR___swiftEmptyArrayStorage_100995ea0,param_6,param_7,puVar5,
                          param_1,param_2,param_3,param_4,param_5,param_6,&local_d0,param_8,param_9,
                          param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17);
            _swift_release(puVar5);
            FUN_10007ef48(&local_d0);
            _swift_bridgeObjectRelease(param_14);
            _swift_bridgeObjectRelease(param_13);
            _swift_bridgeObjectRelease(param_12);
            uVar4 = param_10;
            goto LAB_100079c80;
          }
        }
      }
    }
    else if (0xfffffffffffffffc < local_d0 - 4U) {
      bVar1 = false;
LAB_100079c9c:
      thunk_FUN_1001a2e54(local_d0);
      if (((ulong)puVar6 & 1) == 0) goto LAB_100079ca8;
    }
    puVar5 = &DAT_100a75970;
    FUN_100004bb4(&DAT_100a75970,&DAT_10080a9c0);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(long *)(puVar5 + 0x20) = lVar7;
    _swift_retain(param_15);
    _swift_retain(param_17);
    local_168[0] = param_5;
    _swift_retain_n(param_15,2);
    _swift_retain_n(param_17,2);
    _swift_retain_n(param_8,2);
    _swift_bridgeObjectRetain_n(param_10,2);
    _swift_bridgeObjectRetain_n(param_12,2);
    _swift_bridgeObjectRetain_n(param_13,2);
    _swift_bridgeObjectRetain_n(param_14,2);
    _swift_bridgeObjectRetain(param_5);
    FUN_10005f748(puVar5);
    uVar4 = local_168[0];
    _swift_retain(param_15);
    _swift_retain(param_17);
    _swift_retain(param_8);
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(param_12);
    _swift_bridgeObjectRetain(param_13);
    _swift_bridgeObjectRetain(param_14);
    FUN_100079b04(param_1,param_2 + 1,param_3,param_4,uVar4,param_6,param_7,param_8,param_9,param_10
                  ,param_11,param_12,param_13,param_14,param_15,param_16,param_17);
    _swift_release(param_8);
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease_n(param_10,2);
    _swift_bridgeObjectRelease_n(param_12,2);
    _swift_bridgeObjectRelease_n(param_14,2);
    _swift_bridgeObjectRelease_n(param_13,2);
    _swift_release(param_15);
    _swift_release(param_17);
  }
  else {
    _swift_retain_n(param_15,3);
    _swift_retain_n(param_17,3);
    _swift_bridgeObjectRetain(param_13);
    _swift_bridgeObjectRetain_n(param_14,2);
    _swift_retain(param_8);
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(param_12);
    FUN_1000760a8(param_4,param_5,param_8,param_9,param_10,param_11,param_12,param_13,param_14,
                  param_15,param_16,param_17);
    uVar4 = param_14;
LAB_100079c80:
    _swift_bridgeObjectRelease(uVar4);
  }
  _swift_release_n(param_17,3);
  _swift_release_n(param_15,3);
  _swift_bridgeObjectRelease(param_14);
  _swift_bridgeObjectRelease(param_13);
  _swift_bridgeObjectRelease(param_12);
  _swift_bridgeObjectRelease(param_10);
  _swift_release_n(param_8,2);
  return;
}

