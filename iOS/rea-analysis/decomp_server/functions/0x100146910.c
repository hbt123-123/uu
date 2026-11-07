// rea decompile_all
// name: FUN_100146910
// address: 0x100146910
// body: available
// range: 0x100146910-0x100146ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100146910(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar10;
  long *plVar11;
  code *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_140 [16];
  undefined2 auStack_130 [8];
  long local_120;
  long local_118;
  long local_110;
  char *local_108;
  char *local_100;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e8 + 0x40));
  lVar16 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_f0 = lVar16;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_90,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100401b14(0);
    local_108 = s________isAddTask__100891ff0 + 0x20;
    local_100 = s_____100891c00;
    local_d8 = 0xd000000000000014;
    FUN_1003fb45c(FUN_100149648,param_1,0xd0000000000000ab,0x8000000100891c00,0xd000000000000014,
                  0x8000000100892010,0x50,7);
    plVar10 = *(long **)(param_1 + 0x20);
    pcVar12 = *(code **)(*plVar10 + 0xb8);
    plVar11 = plVar10;
    _swift_retain();
    (*pcVar12)();
    _swift_release(plVar10);
    if (((ulong)plVar11 & 1) == 0) {
      uVar5 = 1;
      FUN_100147e08(1,0);
      if ((uVar5 & 1) != 0) {
        local_e0 = s_____operations_100891eb0 + 0x10;
        local_d0 = &DAT_d000000000000028;
        pcVar13 = local_100;
        pcVar14 = local_108;
        local_120 = lVar4;
        local_118 = lVar15;
        local_110 = lVar3;
        while( true ) {
          FUN_1003fb45c(FUN_100149650,param_1,0xd0000000000000ab,(ulong)pcVar13 | 0x8000000000000000
                        ,local_d8,(ulong)pcVar14 | 0x8000000000000000,0x55,7);
          plVar10 = *(long **)(param_1 + 0x20);
          pcVar12 = *(code **)(*plVar10 + 0xb8);
          plVar11 = plVar10;
          _swift_retain();
          (*pcVar12)();
          _swift_release(plVar10);
          if (((ulong)plVar11 & 1) == 0) {
            plVar11 = *(long **)(param_1 + 0x20);
            pcVar12 = *(code **)(*plVar11 + 0x90);
            _swift_retain(plVar11);
            (*pcVar12)(&local_c0,0);
            _swift_release(plVar11);
            puVar8 = local_c0;
            if (local_c0 != (undefined *)0x0) {
              plVar11 = *(long **)(param_1 + 0x20);
              pcVar12 = *(code **)(*plVar11 + 0xe0);
              _swift_retain(plVar11);
              (*pcVar12)();
              _swift_release(plVar11);
              puVar6 = &DAT_10099ea38;
              _swift_allocObject(&DAT_10099ea38,0x18,7);
              _swift_weakInit(puVar6 + 0x10,param_1);
              puVar7 = &DAT_10099eab0;
              _swift_allocObject(&DAT_10099eab0,0x20,7);
              *(undefined **)(puVar7 + 0x10) = puVar6;
              *(undefined **)(puVar7 + 0x18) = puVar8;
              local_f8 = puVar8;
              local_a0 = FUN_10014965c;
              local_c0 = PTR___NSConcreteStackBlock_100995490;
              local_b8 = 0x42000000;
              local_b0 = FUN_1000acdb4;
              puStack_a8 = &DAT_10099eac8;
              local_98 = puVar7;
              aBlock = __Block_copy(&local_c0);
              _swift_retain(puVar6);
              _swift_retain(puVar8);
              __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar16);
              local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
              FUN_10003f7fc();
              puVar7 = &DAT_100a75a98;
              FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
              puVar9 = puVar7;
              FUN_10004eec4();
              lVar1 = local_f0;
              pcVar14 = local_108;
              lVar15 = local_110;
              __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                        (local_f0,&local_c8,puVar7,puVar9,local_110,puVar8);
              __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                        (0,lVar16,lVar1,aBlock);
              __Block_release(aBlock);
              pcVar13 = local_100;
              lVar4 = local_118;
              lVar3 = local_120;
              (**(code **)(local_e8 + 8))(lVar1,lVar15);
              (**(code **)(lVar4 + 8))(lVar16,lVar3);
              puVar8 = local_98;
              _swift_release(puVar6);
              _swift_release(puVar8);
              FUN_1003fb45c(FUN_100149664,param_1,0xd0000000000000ab,
                            (ulong)pcVar13 | 0x8000000000000000,local_d8,
                            (ulong)pcVar14 | 0x8000000000000000,0x5a,7);
              _swift_release(local_f8);
            }
          }
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined2 *)(lVar16 + -0x10) = 1;
          pcVar2 = local_e0;
          FUN_1003fb45c(thunk_FUN_10014961c,lVar16 + -0x20,0xd0000000000000ab,
                        (ulong)pcVar13 | 0x8000000000000000,local_d0,
                        (ulong)local_e0 | 0x8000000000000000,0x7f,0);
          plVar11 = *(long **)(param_1 + 0x50);
          pcVar12 = *(code **)(*plVar11 + 0x88);
          _swift_retain(plVar11);
          (*pcVar12)(&local_c0);
          _swift_release(plVar11);
          if (SBORROW8((long)local_c0,1)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100146ea4);
            (*pcVar12)();
          }
          if ((long)(local_c0 + -1) < 0) break;
          plVar10 = *(long **)(param_1 + 0x20);
          pcVar12 = *(code **)(*plVar10 + 0xb8);
          plVar11 = plVar10;
          _swift_retain();
          (*pcVar12)();
          _swift_release(plVar10);
          if (((ulong)plVar11 & 1) != 0) break;
          plVar11 = *(long **)(param_1 + 0x50);
          pcVar12 = *(code **)(*plVar11 + 0x88);
          _swift_retain(plVar11);
          (*pcVar12)(&local_c0);
          if (SBORROW8((long)local_c0,1)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x100146ea8);
            (*pcVar12)();
          }
          local_c0 = local_c0 + -1;
          (**(code **)(*plVar11 + 0x90))(&local_c0);
          _swift_release(plVar11);
          FUN_1003fb45c(thunk_FUN_100149630,param_1,0xd0000000000000ab,
                        (ulong)pcVar13 | 0x8000000000000000,local_d0,
                        (ulong)pcVar2 | 0x8000000000000000,0x8a,7);
        }
        FUN_1003fb45c(thunk_FUN_100149628,param_1,0xd0000000000000ab,
                      (ulong)pcVar13 | 0x8000000000000000,local_d0,
                      (ulong)pcVar2 | 0x8000000000000000,0x8e,7);
      }
    }
    _swift_release(param_1);
  }
  return;
}

