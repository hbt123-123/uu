// rea decompile_all
// name: FUN_1000be794
// address: 0x1000be794
// body: available
// range: 0x1000be794-0x1000bedc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000beaec) */

void FUN_1000be794(undefined8 param_1,ulong param_2,ID param_3,long param_4,long param_5,
                  long param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ID IVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *self;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x12;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined1 auStack_160 [16];
  long alStack_150 [2];
  undefined1 auStack_140 [8];
  ID local_138;
  undefined8 local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  undefined1 *local_108;
  char *pcStack_100;
  char *local_f8;
  undefined1 *local_f0;
  ulong local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined1 auStack_a8 [24];
  char local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar7 = 0;
  __s10Foundation3URLVMa();
  local_b8 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  puVar16 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar17 = (long)puVar16 - extraout_x12;
  _swift_beginAccess(param_5 + 0x10,auStack_a8,0,0);
  param_5 = param_5 + 0x10;
  _swift_weakLoadStrong();
  if (param_5 != 0) {
    if (param_4 == 0) {
      if (((param_3 == 0) ||
          (IVar8 = param_3, _swift_dynamicCastObjCClass(param_3,&_OBJC_CLASS___NSHTTPURLResponse),
          IVar8 == 0)) || (IVar8 = _objc_msgSend(IVar8,"statusCode"), IVar8 != 200)) {
        FUN_100401b14(0);
        FUN_1003fb4ec(FUN_1000bee7c,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000014,
                      0x8000000100883a40,0x2fd,0);
        _swift_release(param_5);
      }
      else if (param_2 >> 0x3c < 0xf) {
        lVar13 = *(long *)(param_6 + 0x10);
        local_138 = param_3;
        local_e0 = lVar7;
        local_d8 = param_1;
        local_d0 = param_5;
        FUN_100008184(param_1,param_2);
        if (lVar13 != 0) {
          local_118 = "$_windowLevelProtector";
          local_120 = "privacy_screen_image_vertical";
          local_128 = s___100883a10 + 0x30;
          puVar15 = (undefined8 *)(param_6 + 0x40);
          local_f8 = "privacy_screen_image_mac";
          local_f0 = (undefined1 *)0xd00000000000001d;
          local_108 = &DAT_d000000000000018;
          pcStack_100 = "applyCachedImage(for:)";
          local_110 = " updated overlay in place";
          local_130 = 0xd000000000000016;
          local_e8 = param_2;
          do {
            uVar10 = local_e8;
            cVar4 = *(char *)(puVar15 + -4);
            local_88 = puVar15[-3];
            uVar9 = puVar15[-2];
            uVar12 = puVar15[-1];
            uVar3 = *puVar15;
            local_c0 = lVar13;
            local_90[0] = cVar4;
            uStack_80 = uVar9;
            local_78 = uVar12;
            uStack_70 = uVar3;
            _swift_bridgeObjectRetain(uVar3);
            local_c8 = uVar9;
            _swift_bridgeObjectRetain(uVar9);
            uVar9 = local_d8;
            FUN_1000bdb10(local_d8,uVar10,uVar12,uVar3,cVar4);
            FUN_1003b2558();
            lVar13 = local_b8;
            lVar7 = local_e0;
            (**(code **)(local_b8 + 0x10))(puVar16,uVar9,local_e0);
            puVar15 = puVar15 + 5;
            pcVar1 = pcStack_100;
            puVar5 = local_108;
            if (cVar4 != '\x01') {
              pcVar1 = local_110;
              puVar5 = local_f0;
            }
            pcVar2 = local_f8;
            puVar6 = local_f0;
            if (cVar4 != '\0') {
              pcVar2 = pcVar1;
              puVar6 = puVar5;
            }
            __s10Foundation3URLV22appendingPathComponentyACSSF
                      (uVar17,puVar6,(ulong)pcVar2 | 0x8000000000000000);
            _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
            pcVar14 = *(code **)(lVar13 + 8);
            (*pcVar14)(puVar16,lVar7);
            uVar12 = 0;
            uVar10 = uVar17;
            __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC
                      (uVar17,0);
            (*pcVar14)(uVar17,lVar7);
            uVar11 = uVar10;
            FUN_1000bd850(uVar10,uVar12,cVar4);
            if ((uVar11 & 1) == 0) {
              _swift_bridgeObjectRelease(uVar3);
              _swift_bridgeObjectRelease(local_c8);
              FUN_100006cdc(uVar10,uVar12);
            }
            else {
              self = &_OBJC_CLASS___NSImage;
              _objc_allocWithZone();
              uVar11 = uVar10;
              __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar10,uVar12);
              IVar8 = _objc_msgSend((ID)self,"initWithData:",uVar11);
              FUN_100006cdc(uVar10,uVar12);
              if (IVar8 == 0) {
                _swift_bridgeObjectRelease(uVar3);
                _swift_bridgeObjectRelease(local_c8);
              }
              else {
                FUN_1000bd548(IVar8,cVar4);
                FUN_100401b14(0);
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(char *)(uVar17 - 0x10) = cVar4;
                pcVar1 = local_118;
                FUN_1003fb48c(thunk_FUN_1000c113c,uVar17 - 0x20,0xd00000000000009f,
                              (ulong)local_118 | 0x8000000000000000,local_130,
                              (ulong)local_120 | 0x8000000000000000,0x2b2,0);
                (*(code *)PTR____chkstk_darwin_100995498)(0);
                *(char **)(uVar17 - 0x10) = local_90;
                FUN_1003fb48c(FUN_1000c20d8,uVar17 - 0x20,0xd00000000000009f,
                              (ulong)pcVar1 | 0x8000000000000000,0xd000000000000014,
                              (ulong)local_128 | 0x8000000000000000,0x307,0);
                _swift_bridgeObjectRelease(uVar3);
                _swift_bridgeObjectRelease(local_c8);
              }
            }
            lVar13 = local_c0 + -1;
            param_2 = local_e8;
          } while (lVar13 != 0);
        }
        _swift_release(local_d0);
        FUN_100006cc8(local_d8,param_2);
      }
      else {
        FUN_100401b14(0);
        FUN_1003fb4ec(FUN_1000beea8,0,0xd00000000000009f,0x8000000100882d60,0xd000000000000014,
                      0x8000000100883a40,0x301,0);
        _swift_release(param_5);
      }
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(uVar17 - 0x10) = param_4;
      _swift_errorRetain(param_4);
      FUN_1003fb4ec(FUN_1000c20e0,uVar17 - 0x20,0xd00000000000009f,0x8000000100882d60,
                    0xd000000000000014,0x8000000100883a40,0x2f8,0);
      _swift_errorRelease(param_4);
      _swift_release(param_5);
    }
  }
  return;
}

