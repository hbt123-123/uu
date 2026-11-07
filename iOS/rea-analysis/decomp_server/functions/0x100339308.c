// rea decompile_all
// name: FUN_100339308
// address: 0x100339308
// body: available
// range: 0x100339308-0x100339a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010033994c) */
/* WARNING: Removing unreachable block (ram,0x000100339984) */
/* WARNING: Removing unreachable block (ram,0x00010033993c) */
/* WARNING: Removing unreachable block (ram,0x00010033998c) */

void FUN_100339308(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *self;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  ulong uVar12;
  long unaff_x21;
  long lVar13;
  ID IVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_d0 [8];
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  puVar5 = auStack_d0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_100277ad0();
  lVar6 = _TtC9Alamofire17MultipartFormData::bodyPartError;
  lVar17 = *(long *)(lVar3 + -8);
  lVar13 = (long)puVar5 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire17MultipartFormData::bodyPartError,auStack_78,0,0);
  FUN_10033b0b0(unaff_x20 + lVar6,puVar5);
  puVar4 = puVar5;
  (**(code **)(lVar17 + 0x30))(puVar5,1,lVar3);
  if ((int)puVar4 == 1) {
    puVar2 = &DAT_100a82460;
    FUN_100040bb4(puVar5,&DAT_100a82460,&DAT_1008175c0);
    IVar14 = *(ID *)(unaff_x20 + 0x30);
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar2);
    IVar14 = _objc_msgSend(IVar14,"fileExistsAtPath:",puVar5);
    uVar12 = 0;
    if ((int)IVar14 == 0) {
      __s10Foundation3URLV06isFileB0Sbvg();
      if ((uVar12 & 1) == 0) {
        puVar8 = &DAT_100a824a8;
        FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
        _swift_allocError(lVar3,puVar8,0,0);
        lVar6 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 0x10))(puVar8,param_1,lVar6);
        uVar7 = 0;
        FUN_100278198(0);
        uVar11 = 10;
      }
      else {
        self = &_OBJC_CLASS___NSOutputStream;
        _objc_allocWithZone();
        puVar2 = self;
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        IVar14 = _objc_msgSend((ID)self,"initWithURL:append:",puVar2,0);
        if (IVar14 != 0) {
          _objc_msgSend(IVar14,"open");
          _swift_beginAccess(unaff_x20 + 0x38,auStack_90,0,0);
          uVar12 = *(ulong *)(unaff_x20 + 0x38);
          if (uVar12 >> 0x3e == 0) {
            uVar9 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar9 = uVar12 & 0xffffffffffffff8;
            if ((long)uVar12 < 0) {
              uVar9 = uVar12;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          if (uVar9 != 0) {
            if ((uVar12 & 0xc000000000000001) == 0) {
              if (*(long *)((uVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100339a3c);
                (*pcVar1)();
              }
              lVar6 = *(long *)(uVar12 + 0x20);
              _swift_retain(lVar6);
            }
            else {
              _swift_bridgeObjectRetain(uVar12);
              lVar6 = 0;
              FUN_1002d3c7c(0,uVar12);
              _swift_bridgeObjectRelease(uVar12);
            }
            *(undefined1 *)(lVar6 + 0x28) = 1;
            _swift_release(lVar6);
          }
          uVar12 = *(ulong *)(unaff_x20 + 0x38);
          if (uVar12 >> 0x3e == 0) {
            uVar9 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar9 = uVar12 & 0xffffffffffffff8;
            if ((long)uVar12 < 0) {
              uVar9 = uVar12;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          if (uVar9 != 0) {
            uVar16 = uVar9 - 1;
            if (SBORROW8(uVar9,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100339a38);
              (*pcVar1)();
            }
            if ((uVar12 & 0xc000000000000001) == 0) {
              if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100339a64);
                (*pcVar1)();
              }
              if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100339a68);
                (*pcVar1)();
              }
              uVar16 = *(ulong *)(uVar12 + uVar16 * 8 + 0x20);
              _swift_retain(uVar16);
            }
            else {
              _swift_bridgeObjectRetain(uVar12);
              FUN_1002d3c7c(uVar16,uVar12);
              _swift_bridgeObjectRelease(uVar12);
            }
            *(undefined1 *)(uVar16 + 0x29) = 1;
            _swift_release(uVar16);
          }
          uVar12 = *(ulong *)(unaff_x20 + 0x38);
          if (uVar12 >> 0x3e == 0) {
            uVar9 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar9 = uVar12 & 0xffffffffffffff8;
            if ((long)uVar12 < 0) {
              uVar9 = uVar12;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          if (uVar9 != 0) {
            local_b0 = uVar12 & 0xc000000000000001;
            local_c8 = uVar12 & 0xffffffffffffff8;
            _swift_bridgeObjectRetain(uVar12);
            uVar16 = 0;
            local_c0 = uVar9;
            local_b8 = uVar12;
            do {
              if (local_b0 == 0) {
                if (*(ulong *)(local_c8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003399c4);
                  (*pcVar1)();
                }
                uVar9 = *(ulong *)(uVar12 + uVar16 * 8 + 0x20);
                _swift_retain(uVar9);
              }
              else {
                uVar9 = uVar16;
                FUN_1002d3c7c(uVar16,uVar12);
              }
              if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1003399c0);
                (*pcVar1)();
              }
              uVar15 = uVar16 + 1;
              local_a8 = *(undefined8 *)(unaff_x20 + 0x20);
              uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
              if (*(char *)(uVar9 + 0x28) == '\x01') {
                local_a0 = 0x2d2d;
                local_98 = 0xe200000000000000;
              }
              else {
                local_a0 = 0x2d2d0a0d;
                local_98 = 0xe400000000000000;
              }
              __sSS6appendyySSF(local_a8,uVar7);
              __sSS6appendyySSF(0xa0d,0xe200000000000000);
              uVar11 = local_a0;
              uVar10 = local_98;
              FUN_1002bd428(local_a0,local_98);
              FUN_10033a5c4();
              if (unaff_x21 != 0) {
                _swift_release(uVar9);
                _swift_bridgeObjectRelease(local_b8);
                FUN_100006cdc(uVar11,uVar10);
                _objc_msgSend(IVar14,"close");
                return;
              }
              FUN_100006cdc(uVar11,uVar10);
              uVar12 = uVar9;
              FUN_100339ed8(uVar9);
              FUN_10033a5c4();
              FUN_100006cdc(uVar12,uVar10);
              FUN_10033a71c(uVar9,IVar14);
              uVar12 = local_b8;
              if ((*(byte *)(uVar9 + 0x29) & 1) == 0) {
                _swift_release(uVar9);
              }
              else {
                local_a0 = 0x2d2d0a0d;
                local_98 = 0xe400000000000000;
                __sSS6appendyySSF(local_a8,uVar7);
                __sSS6appendyySSF(0x2d2d,0xe200000000000000);
                __sSS6appendyySSF(0xa0d,0xe200000000000000);
                uVar7 = local_a0;
                uVar11 = local_98;
                FUN_1002bd428(local_a0,local_98);
                FUN_10033a5c4();
                _swift_release(uVar9);
                FUN_100006cdc(uVar7,uVar11);
              }
              uVar16 = uVar16 + 1;
            } while (uVar15 != local_c0);
            _swift_bridgeObjectRelease(uVar12);
          }
          _objc_msgSend(IVar14,"close");
          return;
        }
        puVar8 = &DAT_100a824a8;
        FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
        _swift_allocError(lVar3,puVar8,0,0);
        lVar6 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 0x10))(puVar8,param_1,lVar6);
        uVar7 = 0;
        FUN_100278198(0);
        uVar11 = 8;
      }
    }
    else {
      puVar8 = &DAT_100a824a8;
      FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
      _swift_allocError(lVar3,puVar8,0,0);
      lVar6 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(puVar8,param_1,lVar6);
      uVar7 = 0;
      FUN_100278198(0);
      uVar11 = 9;
    }
    _swift_storeEnumTagMultiPayload(puVar8,uVar7,uVar11);
    _swift_storeEnumTagMultiPayload(puVar8,lVar3,4);
    _swift_willThrow();
  }
  else {
    FUN_10026531c(puVar5,lVar13);
    puVar8 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar3,puVar8,0,0);
    FUN_100082394(lVar13);
    _swift_willThrow();
    FUN_1000d27dc(lVar13,FUN_100277ad0);
  }
  return;
}

